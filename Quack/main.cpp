#include "mainwindow.h"
#include <QApplication>
#include <QErrorMessage>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QErrorMessage::qtHandler();


    QCoreApplication::setOrganizationDomain("com.weller-it");
    QCoreApplication::setOrganizationName("Weller IT");
    QCoreApplication::setApplicationName("Quack");

    MainWindow w;
    w.show();

    return a.exec();
}
