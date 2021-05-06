#include "newtunneldialog.h"
#include "ui_newtunneldialog.h"

NewTunnelDialog::NewTunnelDialog(WireguardManagerLib::WireguardManager& manager,std::optional<std::string> name,QWidget *parent) :
    wg_manager(manager),
    QDialog(parent),
    ui(new Ui::NewTunnelDialog)
{
    ui->setupUi(this);

    if(name.has_value())
    {
        ui->plainTextEdit->setPlainText(QString::fromStdString(wg_manager.get_wg_config(*name)));
        ui->txtInterfaceName->setText(QString::fromStdString(*name));
    }

}

NewTunnelDialog::~NewTunnelDialog()
{
    delete ui;
}

void NewTunnelDialog::on_buttonBox_accepted()
{
    std::string interface = ui->txtInterfaceName->toPlainText().toStdString();
    if(wg_manager.has_config_file(interface))
        wg_manager.update_interface(interface,ui->plainTextEdit->toPlainText().toStdString());
    else
        wg_manager.add_interface(interface,ui->plainTextEdit->toPlainText().toStdString());
}
