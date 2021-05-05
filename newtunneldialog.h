#ifndef NEWTUNNELDIALOG_H
#define NEWTUNNELDIALOG_H

#include <QDialog>
#include <WireguardManagerLib/WireguardManagerLib/WireguardManager.h>

namespace Ui {
class NewTunnelDialog;
}

class NewTunnelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewTunnelDialog(QWidget *parent = nullptr);
    ~NewTunnelDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::NewTunnelDialog *ui;
    WireguardManagerLib::WireguardManager wg_manager;
};

#endif // NEWTUNNELDIALOG_H
