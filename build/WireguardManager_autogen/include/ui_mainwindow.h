/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_Tunnel;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListView *lstTunnel;
    QGroupBox *grpInterface;
    QGroupBox *grpPeer;
    QPushButton *cmdNew;
    QPushButton *cmdImport;
    QPushButton *cmdRemove;
    QWidget *tab_2;
    QListView *lstLog;
    QPushButton *cmdSaveLog;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionAdd_Tunnel = new QAction(MainWindow);
        actionAdd_Tunnel->setObjectName(QString::fromUtf8("actionAdd_Tunnel"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 771, 541));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        lstTunnel = new QListView(tab);
        lstTunnel->setObjectName(QString::fromUtf8("lstTunnel"));
        lstTunnel->setGeometry(QRect(10, 10, 221, 451));
        grpInterface = new QGroupBox(tab);
        grpInterface->setObjectName(QString::fromUtf8("grpInterface"));
        grpInterface->setGeometry(QRect(250, 10, 501, 211));
        grpPeer = new QGroupBox(tab);
        grpPeer->setObjectName(QString::fromUtf8("grpPeer"));
        grpPeer->setGeometry(QRect(250, 230, 501, 231));
        cmdNew = new QPushButton(tab);
        cmdNew->setObjectName(QString::fromUtf8("cmdNew"));
        cmdNew->setGeometry(QRect(10, 470, 51, 25));
        cmdImport = new QPushButton(tab);
        cmdImport->setObjectName(QString::fromUtf8("cmdImport"));
        cmdImport->setGeometry(QRect(70, 470, 61, 25));
        cmdRemove = new QPushButton(tab);
        cmdRemove->setObjectName(QString::fromUtf8("cmdRemove"));
        cmdRemove->setEnabled(false);
        cmdRemove->setGeometry(QRect(140, 470, 89, 25));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lstLog = new QListView(tab_2);
        lstLog->setObjectName(QString::fromUtf8("lstLog"));
        lstLog->setGeometry(QRect(10, 10, 751, 461));
        cmdSaveLog = new QPushButton(tab_2);
        cmdSaveLog->setObjectName(QString::fromUtf8("cmdSaveLog"));
        cmdSaveLog->setGeometry(QRect(670, 480, 89, 25));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAdd_Tunnel);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WireGuard Manager", nullptr));
        actionAdd_Tunnel->setText(QApplication::translate("MainWindow", "Add Tunnel", nullptr));
        grpInterface->setTitle(QApplication::translate("MainWindow", "Interface:", nullptr));
        grpPeer->setTitle(QApplication::translate("MainWindow", "Peer", nullptr));
        cmdNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        cmdImport->setText(QApplication::translate("MainWindow", "Import", nullptr));
        cmdRemove->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tunnels", nullptr));
        cmdSaveLog->setText(QApplication::translate("MainWindow", "Save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Log", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
