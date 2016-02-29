/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *tJID;
    QLabel *label_2;
    QLineEdit *tPassword;
    QCheckBox *cRememberPassword;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *tNickname;
    QCheckBox *cAlwaysAskNickname;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *tServer;
    QSpinBox *tPort;
    QWidget *tab_2;
    QWidget *tab_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(524, 409);
        horizontalLayout = new QHBoxLayout(SettingsDialog);
        horizontalLayout->setSpacing(14);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(14, 14, 14, 14);
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        tJID = new QLineEdit(tab);
        tJID->setObjectName(QStringLiteral("tJID"));

        formLayout->setWidget(0, QFormLayout::FieldRole, tJID);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        tPassword = new QLineEdit(tab);
        tPassword->setObjectName(QStringLiteral("tPassword"));

        formLayout->setWidget(1, QFormLayout::FieldRole, tPassword);

        cRememberPassword = new QCheckBox(tab);
        cRememberPassword->setObjectName(QStringLiteral("cRememberPassword"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cRememberPassword);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        tNickname = new QLineEdit(tab);
        tNickname->setObjectName(QStringLiteral("tNickname"));

        formLayout->setWidget(4, QFormLayout::FieldRole, tNickname);

        cAlwaysAskNickname = new QCheckBox(tab);
        cAlwaysAskNickname->setObjectName(QStringLiteral("cAlwaysAskNickname"));

        formLayout->setWidget(5, QFormLayout::FieldRole, cAlwaysAskNickname);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tServer = new QLineEdit(tab);
        tServer->setObjectName(QStringLiteral("tServer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(9);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tServer->sizePolicy().hasHeightForWidth());
        tServer->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(tServer);

        tPort = new QSpinBox(tab);
        tPort->setObjectName(QStringLiteral("tPort"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tPort->sizePolicy().hasHeightForWidth());
        tPort->setSizePolicy(sizePolicy2);
        tPort->setMinimum(1);
        tPort->setMaximum(32768);
        tPort->setValue(5222);

        horizontalLayout_3->addWidget(tPort);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);


        horizontalLayout_2->addLayout(formLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Dialog", 0));
        label->setText(QApplication::translate("SettingsDialog", "Jabber ID:", 0));
        label_2->setText(QApplication::translate("SettingsDialog", "Password:", 0));
        cRememberPassword->setText(QApplication::translate("SettingsDialog", "Remember Password", 0));
        label_3->setText(QApplication::translate("SettingsDialog", "Server/Port:", 0));
        label_4->setText(QApplication::translate("SettingsDialog", "Nickname:", 0));
        cAlwaysAskNickname->setText(QApplication::translate("SettingsDialog", "Ask For Nickname On Every Start", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsDialog", "Jabber Account", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsDialog", "Appearance", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingsDialog", "Media Sharing", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
