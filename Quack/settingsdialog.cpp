#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);

    QSettings s;
    ui->tJID->setText(s.value("Account/JID").toString());
    ui->tPassword->setText(s.value("Account/Password").toString());
    ui->tServer->setText(s.value("Account/Server").toString());
    ui->tPort->setValue(s.value("Account/Port", 5222).toInt());
    ui->tNickname->setText(s.value("Account/Nickname").toString());
    ui->cRememberPassword->setChecked(s.value("Account/Remember Password", true).toBool());
    ui->cAlwaysAskNickname->setChecked(s.value("Behaviour/Always Ask For Nickname", false).toBool());

}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::saveSettings() {
    QSettings s;
    s.setValue("Account/JID", ui->tJID->text());
    s.setValue("Account/Password", ui->tPassword->text());
    s.setValue("Account/Server", ui->tServer->text());
    s.setValue("Account/Port", ui->tPort->value());
    s.setValue("Account/Nickname", ui->tNickname->text());
    s.setValue("Account/Remember Password", ui->cRememberPassword->isChecked());
    s.setValue("Behaviour/Always Ask For Nickname", ui->cAlwaysAskNickname->isChecked());


}

void SettingsDialog::on_cRememberPassword_stateChanged(int arg1)
{

}

void SettingsDialog::on_cAlwaysAskNickname_stateChanged(int arg1)
{

}

void SettingsDialog::on_SettingsDialog_rejected()
{

}

void SettingsDialog::on_SettingsDialog_accepted()
{
    saveSettings();
}
