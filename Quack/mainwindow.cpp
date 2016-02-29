#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "settingsdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setWindowIcon(QIcon(":/icons/duckling.ico"));
    this->buildTrayMenu();
    trayIcon = new QSystemTrayIcon(QIcon(":/icons/duckling.ico"));
    trayIcon->setContextMenu(trayMenu);
    trayIcon->show();
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(onTrayActivated(QSystemTrayIcon::ActivationReason)));

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::buildTrayMenu() {
    trayMenu = new QMenu();
    QAction *a;
    a=trayMenu->addAction("Open Quack", this, SLOT(onTrayOpenQuack()));
    trayMenu->setDefaultAction(a);
    trayMenu->addAction("Quit", this, SLOT(on_actionQuit_triggered()));
}

void MainWindow::onTrayOpenQuack() {
    this->show(); this->setFocus();
    this->setWindowState( (windowState() & ~Qt::WindowMinimized) | Qt::WindowActive);
    this->raise(); this->activateWindow();
}

void MainWindow::onTrayActivated(QSystemTrayIcon::ActivationReason reason) {
    printf("onTrayActivated\n");
    if (reason == QSystemTrayIcon::Trigger
             || reason == QSystemTrayIcon::DoubleClick)
        onTrayOpenQuack();
}

void MainWindow::on_actionQuit_triggered() {
    if (QMessageBox::question(this, APP_NAME, "Are you sure you want to exit Quack?", QMessageBox::Yes|QMessageBox::No)
            == QMessageBox::Yes)
        QApplication::quit();
}

void MainWindow::closeEvent (QCloseEvent *event) {
    event->ignore();
    this->hide();
}


void MainWindow::on_actionPreferences_triggered()
{
    SettingsDialog sd;
    sd.exec();
}
