/********************************************************************************
** Form generated from reading UI file 'otpinstall.ui'
**
** Created: Fri Sep 4 23:22:34 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTPINSTALL_H
#define UI_OTPINSTALL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_otpInstall
{
public:
    QGridLayout *gridLayout_2;
    QFrame *line;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *install;
    QLabel *installType;
    QLabel *installAction;
    QLabel *installDirectory;
    QLabel *installDatabase;
    QLabel *installProgress;
    QLabel *installSummary;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *installStackedWidget;
    QWidget *installPage;
    QGridLayout *gridLayout_3;
    QLabel *installLabel;
    QWidget *installTypePage;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *installTypeLabelTitle;
    QRadioButton *installTypeRadioTypical;
    QRadioButton *installTypeRadioCompact;
    QRadioButton *installTypeRadioCustom;
    QGroupBox *installTypeGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *installTypeLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *installTypeButton;
    QSpacerItem *verticalSpacer;
    QWidget *installActionPage;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *installActionLabelTitle;
    QRadioButton *installActionRadio1;
    QRadioButton *installActionRadio2;
    QRadioButton *installActionRadio3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *installActionLabel;
    QLineEdit *installActionLineEdit;
    QToolButton *installActionTool;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_5;
    QWidget *page_4;
    QWidget *page_3;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QPushButton *nextButton;
    QPushButton *finishButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *helpButton;

    void setupUi(QWidget *otpInstall)
    {
        if (otpInstall->objectName().isEmpty())
            otpInstall->setObjectName(QString::fromUtf8("otpInstall"));
        otpInstall->setEnabled(true);
        otpInstall->resize(651, 563);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(otpInstall->sizePolicy().hasHeightForWidth());
        otpInstall->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(otpInstall);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        line = new QFrame(otpInstall);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        install = new QLabel(otpInstall);
        install->setObjectName(QString::fromUtf8("install"));
        install->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        install->setFont(font);

        verticalLayout->addWidget(install);

        installType = new QLabel(otpInstall);
        installType->setObjectName(QString::fromUtf8("installType"));
        installType->setEnabled(true);
        installType->setFont(font);

        verticalLayout->addWidget(installType);

        installAction = new QLabel(otpInstall);
        installAction->setObjectName(QString::fromUtf8("installAction"));
        installAction->setEnabled(true);
        installAction->setFont(font);

        verticalLayout->addWidget(installAction);

        installDirectory = new QLabel(otpInstall);
        installDirectory->setObjectName(QString::fromUtf8("installDirectory"));
        installDirectory->setEnabled(true);
        installDirectory->setFont(font);

        verticalLayout->addWidget(installDirectory);

        installDatabase = new QLabel(otpInstall);
        installDatabase->setObjectName(QString::fromUtf8("installDatabase"));
        installDatabase->setEnabled(true);
        installDatabase->setFont(font);

        verticalLayout->addWidget(installDatabase);

        installProgress = new QLabel(otpInstall);
        installProgress->setObjectName(QString::fromUtf8("installProgress"));
        installProgress->setEnabled(true);
        installProgress->setFont(font);

        verticalLayout->addWidget(installProgress);

        installSummary = new QLabel(otpInstall);
        installSummary->setObjectName(QString::fromUtf8("installSummary"));
        installSummary->setEnabled(true);
        installSummary->setFont(font);

        verticalLayout->addWidget(installSummary);

        verticalSpacer_2 = new QSpacerItem(17, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        installStackedWidget = new QStackedWidget(otpInstall);
        installStackedWidget->setObjectName(QString::fromUtf8("installStackedWidget"));
        installPage = new QWidget();
        installPage->setObjectName(QString::fromUtf8("installPage"));
        gridLayout_3 = new QGridLayout(installPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        installLabel = new QLabel(installPage);
        installLabel->setObjectName(QString::fromUtf8("installLabel"));
        installLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(installLabel, 0, 0, 1, 1);

        installStackedWidget->addWidget(installPage);
        installTypePage = new QWidget();
        installTypePage->setObjectName(QString::fromUtf8("installTypePage"));
        gridLayout_5 = new QGridLayout(installTypePage);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        installTypeLabelTitle = new QLabel(installTypePage);
        installTypeLabelTitle->setObjectName(QString::fromUtf8("installTypeLabelTitle"));
        installTypeLabelTitle->setFont(font);
        installTypeLabelTitle->setScaledContents(false);
        installTypeLabelTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        installTypeLabelTitle->setMargin(10);

        verticalLayout_3->addWidget(installTypeLabelTitle);

        installTypeRadioTypical = new QRadioButton(installTypePage);
        installTypeRadioTypical->setObjectName(QString::fromUtf8("installTypeRadioTypical"));

        verticalLayout_3->addWidget(installTypeRadioTypical);

        installTypeRadioCompact = new QRadioButton(installTypePage);
        installTypeRadioCompact->setObjectName(QString::fromUtf8("installTypeRadioCompact"));

        verticalLayout_3->addWidget(installTypeRadioCompact);

        installTypeRadioCustom = new QRadioButton(installTypePage);
        installTypeRadioCustom->setObjectName(QString::fromUtf8("installTypeRadioCustom"));

        verticalLayout_3->addWidget(installTypeRadioCustom);

        installTypeGroupBox = new QGroupBox(installTypePage);
        installTypeGroupBox->setObjectName(QString::fromUtf8("installTypeGroupBox"));
        gridLayout_4 = new QGridLayout(installTypeGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        installTypeLabel = new QLabel(installTypeGroupBox);
        installTypeLabel->setObjectName(QString::fromUtf8("installTypeLabel"));
        installTypeLabel->setWordWrap(true);

        gridLayout_4->addWidget(installTypeLabel, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        installTypeButton = new QPushButton(installTypeGroupBox);
        installTypeButton->setObjectName(QString::fromUtf8("installTypeButton"));

        horizontalLayout_2->addWidget(installTypeButton);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        verticalLayout_3->addWidget(installTypeGroupBox);

        verticalSpacer = new QSpacerItem(20, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);

        installStackedWidget->addWidget(installTypePage);
        installActionPage = new QWidget();
        installActionPage->setObjectName(QString::fromUtf8("installActionPage"));
        gridLayout_6 = new QGridLayout(installActionPage);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        installActionLabelTitle = new QLabel(installActionPage);
        installActionLabelTitle->setObjectName(QString::fromUtf8("installActionLabelTitle"));

        verticalLayout_4->addWidget(installActionLabelTitle);

        installActionRadio1 = new QRadioButton(installActionPage);
        installActionRadio1->setObjectName(QString::fromUtf8("installActionRadio1"));

        verticalLayout_4->addWidget(installActionRadio1);

        installActionRadio2 = new QRadioButton(installActionPage);
        installActionRadio2->setObjectName(QString::fromUtf8("installActionRadio2"));

        verticalLayout_4->addWidget(installActionRadio2);

        installActionRadio3 = new QRadioButton(installActionPage);
        installActionRadio3->setObjectName(QString::fromUtf8("installActionRadio3"));

        verticalLayout_4->addWidget(installActionRadio3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        installActionLabel = new QLabel(installActionPage);
        installActionLabel->setObjectName(QString::fromUtf8("installActionLabel"));

        horizontalLayout_3->addWidget(installActionLabel);

        installActionLineEdit = new QLineEdit(installActionPage);
        installActionLineEdit->setObjectName(QString::fromUtf8("installActionLineEdit"));

        horizontalLayout_3->addWidget(installActionLineEdit);

        installActionTool = new QToolButton(installActionPage);
        installActionTool->setObjectName(QString::fromUtf8("installActionTool"));

        horizontalLayout_3->addWidget(installActionTool);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 268, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        gridLayout_6->addLayout(verticalLayout_4, 0, 0, 1, 1);

        installStackedWidget->addWidget(installActionPage);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        installStackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        installStackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        installStackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        installStackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(installStackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backButton = new QPushButton(otpInstall);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(backButton);

        nextButton = new QPushButton(otpInstall);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        sizePolicy1.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy1);
        nextButton->setDefault(true);

        horizontalLayout->addWidget(nextButton);

        finishButton = new QPushButton(otpInstall);
        finishButton->setObjectName(QString::fromUtf8("finishButton"));
        finishButton->setEnabled(false);
        sizePolicy1.setHeightForWidth(finishButton->sizePolicy().hasHeightForWidth());
        finishButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(finishButton);

        cancelButton = new QPushButton(otpInstall);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        helpButton = new QPushButton(otpInstall);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        sizePolicy1.setHeightForWidth(helpButton->sizePolicy().hasHeightForWidth());
        helpButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(helpButton);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(otpInstall);

        installStackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(otpInstall);
    } // setupUi

    void retranslateUi(QWidget *otpInstall)
    {
        otpInstall->setWindowTitle(QApplication::translate("otpInstall", "Form", 0, QApplication::UnicodeUTF8));
        install->setText(QApplication::translate("otpInstall", "1. Introduction", 0, QApplication::UnicodeUTF8));
        installType->setText(QApplication::translate("otpInstall", "2. Installation type", 0, QApplication::UnicodeUTF8));
        installAction->setText(QApplication::translate("otpInstall", "3. Installation action", 0, QApplication::UnicodeUTF8));
        installDirectory->setText(QApplication::translate("otpInstall", "4. Installation directory", 0, QApplication::UnicodeUTF8));
        installDatabase->setText(QApplication::translate("otpInstall", "5. Database configuration", 0, QApplication::UnicodeUTF8));
        installProgress->setText(QApplication::translate("otpInstall", "6. Installation progress", 0, QApplication::UnicodeUTF8));
        installSummary->setText(QApplication::translate("otpInstall", "7. Summary", 0, QApplication::UnicodeUTF8));
        installLabel->setText(QApplication::translate("otpInstall", "Welcome to the OTP Setup wizard\n"
"  The OTP Setup wizard will install OTP. To continue, click Next.", 0, QApplication::UnicodeUTF8));
        installTypeLabelTitle->setText(QApplication::translate("otpInstall", "Select the instllation type", 0, QApplication::UnicodeUTF8));
        installTypeRadioTypical->setText(QApplication::translate("otpInstall", "Typical: 10-20 MB", 0, QApplication::UnicodeUTF8));
        installTypeRadioCompact->setText(QApplication::translate("otpInstall", "Compact: 10-20 MB", 0, QApplication::UnicodeUTF8));
        installTypeRadioCustom->setText(QApplication::translate("otpInstall", "Custom: 10-120 MB", 0, QApplication::UnicodeUTF8));
        installTypeGroupBox->setTitle(QApplication::translate("otpInstall", "Information about the installation type", 0, QApplication::UnicodeUTF8));
        installTypeLabel->setText(QApplication::translate("otpInstall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Typical</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">  </span>The typical setup includes only some basic features of otp authentication.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px;"
                        " margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  To add features for application management and other optional functionality later in the setup process, click Custom.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  To view all available features and those selected for a typical installation, press the View Features button.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        installTypeButton->setText(QApplication::translate("otpInstall", "View Features", 0, QApplication::UnicodeUTF8));
        installActionLabelTitle->setText(QApplication::translate("otpInstall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Select installation, response file creation, or both</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The OTP Setup wizard can install OTP on this computer, create a repsonse file that you can use to install this product on a computer, or both.</p></body></html>", 0, QApplication::UnicodeUTF8));
        installActionRadio1->setText(QApplication::translate("otpInstall", "Install OTP on this computer", 0, QApplication::UnicodeUTF8));
        installActionRadio2->setText(QApplication::translate("otpInstall", "Save my installation settings in a response file", 0, QApplication::UnicodeUTF8));
        installActionRadio3->setText(QApplication::translate("otpInstall", "Install OTP on this computer and save a response file", 0, QApplication::UnicodeUTF8));
        installActionLabel->setText(QApplication::translate("otpInstall", "Response file name:", 0, QApplication::UnicodeUTF8));
        installActionLineEdit->setText(QApplication::translate("otpInstall", "/root/otplinux.rsp", 0, QApplication::UnicodeUTF8));
        installActionTool->setText(QApplication::translate("otpInstall", "...", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("otpInstall", "Back", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("otpInstall", "Next", 0, QApplication::UnicodeUTF8));
        finishButton->setText(QApplication::translate("otpInstall", "Finish", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("otpInstall", "Cancel", 0, QApplication::UnicodeUTF8));
        helpButton->setText(QApplication::translate("otpInstall", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class otpInstall: public Ui_otpInstall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTPINSTALL_H
