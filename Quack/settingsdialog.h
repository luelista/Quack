#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();

    void saveSettings();

private slots:
    void on_cRememberPassword_stateChanged(int arg1);

    void on_cAlwaysAskNickname_stateChanged(int arg1);

    void on_SettingsDialog_rejected();

    void on_SettingsDialog_accepted();

private:
    Ui::SettingsDialog *ui;
};

#endif // SETTINGSDIALOG_H
