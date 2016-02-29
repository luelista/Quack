#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QSystemTrayIcon>

#include <QMessageBox>
#include <QDockWidget>
#include <QListWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onTrayOpenQuack();
    void onTrayActivated(QSystemTrayIcon::ActivationReason reason);

    void on_actionPreferences_triggered();
    void on_actionQuit_triggered();

private:
    Ui::MainWindow *ui;
    QSystemTrayIcon *trayIcon;
    QMenu* trayMenu;

    void closeEvent (QCloseEvent *event);
    void buildTrayMenu();

};

#endif // MAINWINDOW_H
