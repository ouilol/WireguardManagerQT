#include <qstringlistmodel.h>
#include <qstandarditemmodel.h>
#include <qmessagebox.h>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newtunneldialog.h"

struct tunnel_data
{
    bool status;
    QString name;
};


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , wg_manager(WireguardManagerLib::WireguardManagerOptions())
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wg_manager.get_options().wg_path = "wg";

    wg_manager.initialize();
    //auto test = wg_manager.query_wg();
    refresh_tunnel_list();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_cmdNew_clicked()
{
    NewTunnelDialog newTunnel(wg_manager,std::nullopt);
    newTunnel.setModal(true);
    newTunnel.exec();
    if(!newTunnel.isActiveWindow())
        refresh_tunnel_list();
}

void MainWindow::refresh_tunnel_list()
{
    QVector<tunnel_data> lst_tunnel_data;

    auto config_filename = wg_manager.get_wg_config_file_names();
    auto model = new QStandardItemModel;
    ui->lstTunnel->setModel(model);

    model->setHorizontalHeaderItem(0, new QStandardItem("Status"));
    model->setHorizontalHeaderItem(1, new QStandardItem("Interface"));

    for (const auto& config : config_filename)
        lst_tunnel_data.push_back(*new tunnel_data{false,QString::fromStdString(config)});

    QList<QStandardItem*> rowData;
    Q_FOREACH(const auto &item , lst_tunnel_data)
    {
        rowData.clear();
        rowData << new QStandardItem(item.status);
        rowData << new QStandardItem(item.name);
        model->appendRow(rowData);
    }
}

void MainWindow::on_lstTunnel_clicked(const QModelIndex &index)
{
    ui->cmdRemove->setEnabled(true);
    ui->txtInterface->setPlainText(QString::fromStdString(wg_manager.get_wg_config(index.data(Qt::DisplayRole).toString().toStdString())));
}

void MainWindow::on_cmdRemove_clicked()
{
    QMessageBox::StandardButton reply;
    auto interface_name = ui->lstTunnel->model()->data(ui->lstTunnel->model()->index(ui->lstTunnel->currentIndex().row(),1)).toString();
    reply = QMessageBox::question(this,"Warning",QString("Are you shure you want to delete %1").arg(interface_name),QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        wg_manager.delete_interface(interface_name.toStdString());
        refresh_tunnel_list();
    }
}

void MainWindow::on_cmdEdit_clicked()
{
    auto selectedVPN = ui->lstTunnel->model()->data(ui->lstTunnel->model()->index(ui->lstTunnel->currentIndex().row(),1)).toString().toStdString();
    NewTunnelDialog newTunnel(wg_manager,selectedVPN) ;
    newTunnel.setModal(true);
    newTunnel.exec();
    if(!newTunnel.isActiveWindow())
    {
        refresh_tunnel_list();
        ui->txtInterface->setPlainText(QString::fromStdString(wg_manager.get_wg_config(selectedVPN)));
    }
}

void MainWindow::on_cmdActivate_clicked()
{
    auto status = wg_manager.wg_show();
    if(!status.empty())
    {
        Q_FOREACH(auto &interfacen, status.data()->get_name() )
        {

        }
    }

    auto selectedVPN = ui->lstTunnel->model()->data(ui->lstTunnel->model()->index(ui->lstTunnel->currentIndex().row(),1)).toString().toStdString();
    wg_manager.start_wg(selectedVPN);
}
