#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private:
    Ui::MainWindow *ui;
    WireguardManagerLib::WireguardManager wg_manager;
};
#endif // MAINWINDOW_H
