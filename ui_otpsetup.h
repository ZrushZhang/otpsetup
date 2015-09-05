/********************************************************************************
** Form generated from reading UI file 'otpsetup.ui'
**
** Created: Sat Sep 5 17:55:02 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTPSETUP_H
#define UI_OTPSETUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_otpsetup
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *welcomeLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *welcomeCommandLine;
    QCommandLinkButton *releaseCommandLine;
    QCommandLinkButton *installCommandLine;
    QCommandLinkButton *exitCommandLine;
    QSpacerItem *verticalSpacer;
    QWebView *otpWebView;

    void setupUi(QWidget *otpsetup)
    {
        if (otpsetup->objectName().isEmpty())
            otpsetup->setObjectName(QString::fromUtf8("otpsetup"));
        otpsetup->resize(723, 492);
        gridLayout_2 = new QGridLayout(otpsetup);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        welcomeLabel = new QLabel(otpsetup);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));

        gridLayout->addWidget(welcomeLabel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(488, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        welcomeCommandLine = new QCommandLinkButton(otpsetup);
        welcomeCommandLine->setObjectName(QString::fromUtf8("welcomeCommandLine"));
        welcomeCommandLine->setDefault(true);

        verticalLayout->addWidget(welcomeCommandLine);

        releaseCommandLine = new QCommandLinkButton(otpsetup);
        releaseCommandLine->setObjectName(QString::fromUtf8("releaseCommandLine"));

        verticalLayout->addWidget(releaseCommandLine);

        installCommandLine = new QCommandLinkButton(otpsetup);
        installCommandLine->setObjectName(QString::fromUtf8("installCommandLine"));

        verticalLayout->addWidget(installCommandLine);

        exitCommandLine = new QCommandLinkButton(otpsetup);
        exitCommandLine->setObjectName(QString::fromUtf8("exitCommandLine"));

        verticalLayout->addWidget(exitCommandLine);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        otpWebView = new QWebView(otpsetup);
        otpWebView->setObjectName(QString::fromUtf8("otpWebView"));
        otpWebView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout->addWidget(otpWebView, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(otpsetup);

        QMetaObject::connectSlotsByName(otpsetup);
    } // setupUi

    void retranslateUi(QWidget *otpsetup)
    {
        otpsetup->setWindowTitle(QApplication::translate("otpsetup", "otpsetup", 0, QApplication::UnicodeUTF8));
        welcomeLabel->setText(QApplication::translate("otpsetup", "Welcome", 0, QApplication::UnicodeUTF8));
        welcomeCommandLine->setText(QApplication::translate("otpsetup", "Welcome", 0, QApplication::UnicodeUTF8));
        releaseCommandLine->setText(QApplication::translate("otpsetup", "Release information", 0, QApplication::UnicodeUTF8));
        installCommandLine->setText(QApplication::translate("otpsetup", "Install a Product", 0, QApplication::UnicodeUTF8));
        exitCommandLine->setText(QApplication::translate("otpsetup", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class otpsetup: public Ui_otpsetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTPSETUP_H
