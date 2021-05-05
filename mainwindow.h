#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QModelIndexList>
#include "WireguardManagerLib/WireguardManagerLib/WireguardManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_cmdNew_clicked();
    void refresh_tunnel_list();
    void on_lstTunnel_clicked(const QModelIndex &index);

    void on_cmdRemove_clicked();

private:
    Ui::MainWindow *ui;
    WireguardManagerLib::WireguardManager wg_manager;
};
#endif // MAINWINDOW_H
