/********************************************************************************
** Form generated from reading UI file 'otpinstall.ui'
**
** Created: Sat Sep 5 18:00:15 2015
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
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_otpInstall
{
public:
    QGridLayout *gridLayout_2;
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
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *installStackedWidget;
    QWidget *installPage;
    QGridLayout *gridLayout_3;
    QLabel *installLabel;
    QWidget *installTypePage;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *installTypeLabelTitle;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_14;
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
    QSpacerItem *verticalSpacer_8;
    QRadioButton *installActionRadio1;
    QSpacerItem *verticalSpacer_10;
    QRadioButton *installActionRadio2;
    QSpacerItem *verticalSpacer_9;
    QRadioButton *installActionRadio3;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *installActionLabel;
    QLineEdit *installActionLineEdit;
    QToolButton *installActionTool;
    QSpacerItem *verticalSpacer_3;
    QWidget *installDirectoryPage;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *installDirectoryLabelTitle;
    QLabel *installDirectoryLabel1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *installDirectoryLabel2;
    QLineEdit *installDirectoryLineEdit;
    QToolButton *installDirectoryToolBox;
    QLabel *installDirectoryLabel3;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_4;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *installDatabaseLabelTitle;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_8;
    QLabel *installDatabaseLabelType;
    QComboBox *installDatabaseComboBox;
    QLabel *installDatabaseLabelName;
    QLineEdit *installDatabaseName;
    QLabel *installDatabaseLabelHost;
    QLineEdit *installDatabaseHost;
    QLabel *installDatabaseLabeUser;
    QLineEdit *installDatabaseUser;
    QLabel *installDatabaseLabelPort;
    QLineEdit *installDatabasePort;
    QLabel *installDatabaseLabelPassword;
    QLineEdit *installDatabasePassword;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_3;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *installProgressLabelTitle;
    QTextBrowser *installProgressTextBrowser;
    QHBoxLayout *horizontalLayout_5;
    QLabel *installProgressLabel;
    QProgressBar *installProgressBar;
    QSpacerItem *verticalSpacer_6;
    QWidget *page_2;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *installSummaryLabelTitle;
    QLabel *installSummaryLabelSettings;
    QTextBrowser *installSummaryTextBrowser;
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
        otpInstall->resize(733, 560);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(otpInstall->sizePolicy().hasHeightForWidth());
        otpInstall->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(otpInstall);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
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

        line = new QFrame(otpInstall);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        installStackedWidget = new QStackedWidget(otpInstall);
        installStackedWidget->setObjectName(QString::fromUtf8("installStackedWidget"));
        sizePolicy.setHeightForWidth(installStackedWidget->sizePolicy().hasHeightForWidth());
        installStackedWidget->setSizePolicy(sizePolicy);
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
        installTypeLabelTitle->setMargin(0);

        verticalLayout_3->addWidget(installTypeLabelTitle);

        verticalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(installTypePage);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        comboBox = new QComboBox(installTypePage);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_7->addWidget(comboBox);

        horizontalSpacer_4 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_14);

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

        verticalSpacer = new QSpacerItem(20, 128, QSizePolicy::Minimum, QSizePolicy::Expanding);

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
        installActionLabelTitle->setMargin(0);

        verticalLayout_4->addWidget(installActionLabelTitle);

        verticalSpacer_8 = new QSpacerItem(17, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        installActionRadio1 = new QRadioButton(installActionPage);
        installActionRadio1->setObjectName(QString::fromUtf8("installActionRadio1"));

        verticalLayout_4->addWidget(installActionRadio1);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        installActionRadio2 = new QRadioButton(installActionPage);
        installActionRadio2->setObjectName(QString::fromUtf8("installActionRadio2"));

        verticalLayout_4->addWidget(installActionRadio2);

        verticalSpacer_9 = new QSpacerItem(18, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        installActionRadio3 = new QRadioButton(installActionPage);
        installActionRadio3->setObjectName(QString::fromUtf8("installActionRadio3"));

        verticalLayout_4->addWidget(installActionRadio3);

        verticalSpacer_7 = new QSpacerItem(17, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

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

        verticalSpacer_3 = new QSpacerItem(20, 228, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        gridLayout_6->addLayout(verticalLayout_4, 0, 0, 1, 1);

        installStackedWidget->addWidget(installActionPage);
        installDirectoryPage = new QWidget();
        installDirectoryPage->setObjectName(QString::fromUtf8("installDirectoryPage"));
        gridLayout_7 = new QGridLayout(installDirectoryPage);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        installDirectoryLabelTitle = new QLabel(installDirectoryPage);
        installDirectoryLabelTitle->setObjectName(QString::fromUtf8("installDirectoryLabelTitle"));

        verticalLayout_5->addWidget(installDirectoryLabelTitle);

        installDirectoryLabel1 = new QLabel(installDirectoryPage);
        installDirectoryLabel1->setObjectName(QString::fromUtf8("installDirectoryLabel1"));

        verticalLayout_5->addWidget(installDirectoryLabel1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        installDirectoryLabel2 = new QLabel(installDirectoryPage);
        installDirectoryLabel2->setObjectName(QString::fromUtf8("installDirectoryLabel2"));

        horizontalLayout_4->addWidget(installDirectoryLabel2);

        installDirectoryLineEdit = new QLineEdit(installDirectoryPage);
        installDirectoryLineEdit->setObjectName(QString::fromUtf8("installDirectoryLineEdit"));

        horizontalLayout_4->addWidget(installDirectoryLineEdit);

        installDirectoryToolBox = new QToolButton(installDirectoryPage);
        installDirectoryToolBox->setObjectName(QString::fromUtf8("installDirectoryToolBox"));

        horizontalLayout_4->addWidget(installDirectoryToolBox);

        installDirectoryLabel3 = new QLabel(installDirectoryPage);
        installDirectoryLabel3->setObjectName(QString::fromUtf8("installDirectoryLabel3"));

        horizontalLayout_4->addWidget(installDirectoryLabel3);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 298, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        gridLayout_7->addLayout(verticalLayout_5, 0, 0, 1, 1);

        installStackedWidget->addWidget(installDirectoryPage);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_9 = new QGridLayout(page_4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        installDatabaseLabelTitle = new QLabel(page_4);
        installDatabaseLabelTitle->setObjectName(QString::fromUtf8("installDatabaseLabelTitle"));

        verticalLayout_6->addWidget(installDatabaseLabelTitle);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        installDatabaseLabelType = new QLabel(page_4);
        installDatabaseLabelType->setObjectName(QString::fromUtf8("installDatabaseLabelType"));

        gridLayout_8->addWidget(installDatabaseLabelType, 0, 0, 1, 1);

        installDatabaseComboBox = new QComboBox(page_4);
        installDatabaseComboBox->setObjectName(QString::fromUtf8("installDatabaseComboBox"));

        gridLayout_8->addWidget(installDatabaseComboBox, 0, 1, 1, 2);

        installDatabaseLabelName = new QLabel(page_4);
        installDatabaseLabelName->setObjectName(QString::fromUtf8("installDatabaseLabelName"));

        gridLayout_8->addWidget(installDatabaseLabelName, 1, 0, 1, 1);

        installDatabaseName = new QLineEdit(page_4);
        installDatabaseName->setObjectName(QString::fromUtf8("installDatabaseName"));

        gridLayout_8->addWidget(installDatabaseName, 1, 1, 1, 2);

        installDatabaseLabelHost = new QLabel(page_4);
        installDatabaseLabelHost->setObjectName(QString::fromUtf8("installDatabaseLabelHost"));

        gridLayout_8->addWidget(installDatabaseLabelHost, 2, 0, 1, 1);

        installDatabaseHost = new QLineEdit(page_4);
        installDatabaseHost->setObjectName(QString::fromUtf8("installDatabaseHost"));

        gridLayout_8->addWidget(installDatabaseHost, 2, 1, 1, 2);

        installDatabaseLabeUser = new QLabel(page_4);
        installDatabaseLabeUser->setObjectName(QString::fromUtf8("installDatabaseLabeUser"));

        gridLayout_8->addWidget(installDatabaseLabeUser, 3, 0, 1, 1);

        installDatabaseUser = new QLineEdit(page_4);
        installDatabaseUser->setObjectName(QString::fromUtf8("installDatabaseUser"));

        gridLayout_8->addWidget(installDatabaseUser, 3, 1, 1, 2);

        installDatabaseLabelPort = new QLabel(page_4);
        installDatabaseLabelPort->setObjectName(QString::fromUtf8("installDatabaseLabelPort"));

        gridLayout_8->addWidget(installDatabaseLabelPort, 4, 0, 1, 1);

        installDatabasePort = new QLineEdit(page_4);
        installDatabasePort->setObjectName(QString::fromUtf8("installDatabasePort"));

        gridLayout_8->addWidget(installDatabasePort, 4, 1, 1, 2);

        installDatabaseLabelPassword = new QLabel(page_4);
        installDatabaseLabelPassword->setObjectName(QString::fromUtf8("installDatabaseLabelPassword"));

        gridLayout_8->addWidget(installDatabaseLabelPassword, 5, 0, 1, 2);

        installDatabasePassword = new QLineEdit(page_4);
        installDatabasePassword->setObjectName(QString::fromUtf8("installDatabasePassword"));

        gridLayout_8->addWidget(installDatabasePassword, 5, 2, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_8);

        horizontalSpacer_3 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 198, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);


        gridLayout_9->addLayout(verticalLayout_6, 0, 0, 1, 1);

        installStackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_10 = new QGridLayout(page_3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        installProgressLabelTitle = new QLabel(page_3);
        installProgressLabelTitle->setObjectName(QString::fromUtf8("installProgressLabelTitle"));

        verticalLayout_7->addWidget(installProgressLabelTitle);

        installProgressTextBrowser = new QTextBrowser(page_3);
        installProgressTextBrowser->setObjectName(QString::fromUtf8("installProgressTextBrowser"));

        verticalLayout_7->addWidget(installProgressTextBrowser);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        installProgressLabel = new QLabel(page_3);
        installProgressLabel->setObjectName(QString::fromUtf8("installProgressLabel"));

        horizontalLayout_5->addWidget(installProgressLabel);

        installProgressBar = new QProgressBar(page_3);
        installProgressBar->setObjectName(QString::fromUtf8("installProgressBar"));
        installProgressBar->setValue(24);

        horizontalLayout_5->addWidget(installProgressBar);


        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);


        gridLayout_10->addLayout(verticalLayout_8, 0, 0, 1, 1);

        installStackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_11 = new QGridLayout(page_2);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        installSummaryLabelTitle = new QLabel(page_2);
        installSummaryLabelTitle->setObjectName(QString::fromUtf8("installSummaryLabelTitle"));
        installSummaryLabelTitle->setWordWrap(true);

        verticalLayout_9->addWidget(installSummaryLabelTitle);

        installSummaryLabelSettings = new QLabel(page_2);
        installSummaryLabelSettings->setObjectName(QString::fromUtf8("installSummaryLabelSettings"));

        verticalLayout_9->addWidget(installSummaryLabelSettings);

        installSummaryTextBrowser = new QTextBrowser(page_2);
        installSummaryTextBrowser->setObjectName(QString::fromUtf8("installSummaryTextBrowser"));

        verticalLayout_9->addWidget(installSummaryTextBrowser);


        gridLayout_11->addLayout(verticalLayout_9, 0, 0, 1, 1);

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


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(otpInstall);

        installStackedWidget->setCurrentIndex(1);


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
"\n"
"The OTP Setup wizard will install OTP. To continue, click Next.", 0, QApplication::UnicodeUTF8));
        installTypeLabelTitle->setText(QApplication::translate("otpInstall", "Select the instllation type", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("otpInstall", "Setup Mode:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("otpInstall", "Typical: 10-20 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("otpInstall", "Compact: 10-20 MB", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("otpInstall", "Custom: 10-120 MB", 0, QApplication::UnicodeUTF8)
        );
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
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The OTP Setup wizard can install OTP on this computer, create a repsonse file that you can use to install this product on a computer, or both.</p></body"
                        "></html>", 0, QApplication::UnicodeUTF8));
        installActionRadio1->setText(QApplication::translate("otpInstall", "Install OTP on this computer", 0, QApplication::UnicodeUTF8));
        installActionRadio2->setText(QApplication::translate("otpInstall", "Save my installation settings in a response file", 0, QApplication::UnicodeUTF8));
        installActionRadio3->setText(QApplication::translate("otpInstall", "Install OTP on this computer and save a response file", 0, QApplication::UnicodeUTF8));
        installActionLabel->setText(QApplication::translate("otpInstall", "Response file name:", 0, QApplication::UnicodeUTF8));
        installActionLineEdit->setText(QApplication::translate("otpInstall", "/root/otplinux.rsp", 0, QApplication::UnicodeUTF8));
        installActionTool->setText(QApplication::translate("otpInstall", "...", 0, QApplication::UnicodeUTF8));
        installDirectoryLabelTitle->setText(QApplication::translate("otpInstall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Installation directory</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The OTP Setup wizard installs OTP in the following directory.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-b"
                        "lock-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        installDirectoryLabel1->setText(QApplication::translate("otpInstall", "The installation directory cannot be changed.\n"
"", 0, QApplication::UnicodeUTF8));
        installDirectoryLabel2->setText(QApplication::translate("otpInstall", "Directory:", 0, QApplication::UnicodeUTF8));
        installDirectoryLineEdit->setText(QApplication::translate("otpInstall", "/usr/local/otpserver", 0, QApplication::UnicodeUTF8));
        installDirectoryToolBox->setText(QApplication::translate("otpInstall", "...", 0, QApplication::UnicodeUTF8));
        installDirectoryLabel3->setText(QApplication::translate("otpInstall", "Space required:  0 MB", 0, QApplication::UnicodeUTF8));
        installDatabaseLabelTitle->setText(QApplication::translate("otpInstall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Database configuration for OTP</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Some database information needs to be provided that will initial OTP form and data. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        installDatabaseLabelType->setText(QApplication::translate("otpInstall", "Database Type:", 0, QApplication::UnicodeUTF8));
        installDatabaseComboBox->clear();
        installDatabaseComboBox->insertItems(0, QStringList()
         << QApplication::translate("otpInstall", "MySQL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("otpInstall", "Oracle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("otpInstall", "DB2", 0, QApplication::UnicodeUTF8)
        );
        installDatabaseLabelName->setText(QApplication::translate("otpInstall", "Database Name:", 0, QApplication::UnicodeUTF8));
        installDatabaseLabelHost->setText(QApplication::translate("otpInstall", "Database Host: ", 0, QApplication::UnicodeUTF8));
        installDatabaseLabeUser->setText(QApplication::translate("otpInstall", "Database User:", 0, QApplication::UnicodeUTF8));
        installDatabaseLabelPort->setText(QApplication::translate("otpInstall", "Database Port:", 0, QApplication::UnicodeUTF8));
        installDatabaseLabelPassword->setText(QApplication::translate("otpInstall", "Database Password:", 0, QApplication::UnicodeUTF8));
        installProgressLabelTitle->setText(QApplication::translate("otpInstall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Get install progress</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please wait the install process, and you can get more setup information below.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        installProgressLabel->setText(QApplication::translate("otpInstall", "Installation Process", 0, QApplication::UnicodeUTF8));
        installSummaryLabelTitle->setText(QApplication::translate("otpInstall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Start copying files and create response file</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The OTP Setup wizard has enough information to start copying the program files and create the response file. If you want to review or change any settings, click"
                        " Back. If you are satisfied with the settings, click Finish to begin copying files and create the response file.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        installSummaryLabelSettings->setText(QApplication::translate("otpInstall", "Current settings:", 0, QApplication::UnicodeUTF8));
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
