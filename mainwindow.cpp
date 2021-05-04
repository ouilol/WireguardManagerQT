#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newtunneldialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , wg_manager(WireguardManagerLib::WireguardManagerOptions())
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wg_manager.initialize();
    auto configs = wg_manager.get_wg_config_file();
    auto test = wg_manager.query_wg();
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
