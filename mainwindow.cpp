#include <qstringlistmodel.h>


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newtunneldialog.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , wg_manager(WireguardManagerLib::WireguardManagerOptions())
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wg_manager.get_options().wg_path = "C:\\Program Files\\WireGuard\\wg.exe";

    wg_manager.initialize();
    auto configs = wg_manager.get_wg_config_file_names();
    //auto test = wg_manager.query_wg();

    auto model = new QStringListModel();
    ui->lstTunnel->setModel(model);

    for (const auto& config : configs)
    {
        model->insertRow(model->rowCount());
        auto index = ui->lstTunnel->model()->index(model->rowCount() - 1, 0);
        ui->lstTunnel->model()->setData(index, QString::fromStdString(config));
    }
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
}
