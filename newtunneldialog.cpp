#include "newtunneldialog.h"
#include "ui_newtunneldialog.h"

NewTunnelDialog::NewTunnelDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewTunnelDialog)
{
    ui->setupUi(this);
}

NewTunnelDialog::~NewTunnelDialog()
{
    delete ui;
}
