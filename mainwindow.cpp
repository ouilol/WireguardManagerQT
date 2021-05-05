#include <qstringlistmodel.h>
#include <qstandarditemmodel.h>


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

    wg_manager.get_options().wg_path = "C:\\Program Files\\WireGuard\\wg.exe";

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
    NewTunnelDialog newTunnel;
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
}

void MainWindow::on_cmdRemove_clicked()
{

    auto interface_name = ui->lstTunnel->model()->data(ui->lstTunnel->model()->index(ui->lstTunnel->currentIndex().row(),1)).toString().toStdString();
    wg_manager.delete_interface(interface_name);
    refresh_tunnel_list();
}
