#include "newtunneldialog.h"
#include "ui_newtunneldialog.h"

NewTunnelDialog::NewTunnelDialog(QWidget *parent) :
    wg_manager(WireguardManagerLib::WireguardManagerOptions()),
    QDialog(parent),
    ui(new Ui::NewTunnelDialog)
{
    ui->setupUi(this);
    wg_manager.initialize();
}

NewTunnelDialog::~NewTunnelDialog()
{
    delete ui;
}

void NewTunnelDialog::on_buttonBox_accepted()
{
    wg_manager.add_interface(ui->txtInterfaceName->toPlainText().toStdString(),ui->plainTextEdit->toPlainText().toStdString());
}
