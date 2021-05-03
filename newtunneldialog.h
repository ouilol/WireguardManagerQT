#ifndef NEWTUNNELDIALOG_H
#define NEWTUNNELDIALOG_H

#include <QDialog>

namespace Ui {
class NewTunnelDialog;
}

class NewTunnelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewTunnelDialog(QWidget *parent = nullptr);
    ~NewTunnelDialog();

private:
    Ui::NewTunnelDialog *ui;
};

#endif // NEWTUNNELDIALOG_H
