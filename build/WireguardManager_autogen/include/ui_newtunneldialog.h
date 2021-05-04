/********************************************************************************
** Form generated from reading UI file 'newtunneldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTUNNELDIALOG_H
#define UI_NEWTUNNELDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewTunnelDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *NewTunnelDialog)
    {
        if (NewTunnelDialog->objectName().isEmpty())
            NewTunnelDialog->setObjectName(QString::fromUtf8("NewTunnelDialog"));
        NewTunnelDialog->resize(683, 384);
        buttonBox = new QDialogButtonBox(NewTunnelDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(330, 340, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(NewTunnelDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 20, 661, 311));

        retranslateUi(NewTunnelDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewTunnelDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewTunnelDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewTunnelDialog);
    } // setupUi

    void retranslateUi(QDialog *NewTunnelDialog)
    {
        NewTunnelDialog->setWindowTitle(QApplication::translate("NewTunnelDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewTunnelDialog: public Ui_NewTunnelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTUNNELDIALOG_H
