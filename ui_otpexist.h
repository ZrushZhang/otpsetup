/********************************************************************************
** Form generated from reading UI file 'otpexist.ui'
**
** Created: Sun Sep 6 15:35:11 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTPEXIST_H
#define UI_OTPEXIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_otpExist
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *otpExistLabel;
    QTableWidget *otpExistTable1;
    QCheckBox *otpExistCheckBox;
    QTableWidget *otpExistTable2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *otpExistLaunchButton;
    QPushButton *otpExistCancelButton;
    QPushButton *otpExistHelpButton;

    void setupUi(QWidget *otpExist)
    {
        if (otpExist->objectName().isEmpty())
            otpExist->setObjectName(QString::fromUtf8("otpExist"));
        otpExist->resize(565, 540);
        gridLayout = new QGridLayout(otpExist);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        otpExistLabel = new QLabel(otpExist);
        otpExistLabel->setObjectName(QString::fromUtf8("otpExistLabel"));
        otpExistLabel->setWordWrap(true);

        verticalLayout->addWidget(otpExistLabel);

        otpExistTable1 = new QTableWidget(otpExist);
        if (otpExistTable1->columnCount() < 2)
            otpExistTable1->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        otpExistTable1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        otpExistTable1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        otpExistTable1->setObjectName(QString::fromUtf8("otpExistTable1"));
        otpExistTable1->setEditTriggers(QAbstractItemView::NoEditTriggers);
        otpExistTable1->horizontalHeader()->setVisible(false);
        otpExistTable1->horizontalHeader()->setMinimumSectionSize(4);
        otpExistTable1->horizontalHeader()->setStretchLastSection(true);
        otpExistTable1->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(otpExistTable1);

        otpExistCheckBox = new QCheckBox(otpExist);
        otpExistCheckBox->setObjectName(QString::fromUtf8("otpExistCheckBox"));

        verticalLayout->addWidget(otpExistCheckBox);

        otpExistTable2 = new QTableWidget(otpExist);
        if (otpExistTable2->columnCount() < 2)
            otpExistTable2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        otpExistTable2->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        otpExistTable2->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        otpExistTable2->setObjectName(QString::fromUtf8("otpExistTable2"));
        otpExistTable2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        otpExistTable2->horizontalHeader()->setVisible(false);
        otpExistTable2->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(otpExistTable2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        otpExistLaunchButton = new QPushButton(otpExist);
        otpExistLaunchButton->setObjectName(QString::fromUtf8("otpExistLaunchButton"));

        horizontalLayout->addWidget(otpExistLaunchButton);

        otpExistCancelButton = new QPushButton(otpExist);
        otpExistCancelButton->setObjectName(QString::fromUtf8("otpExistCancelButton"));

        horizontalLayout->addWidget(otpExistCancelButton);

        otpExistHelpButton = new QPushButton(otpExist);
        otpExistHelpButton->setObjectName(QString::fromUtf8("otpExistHelpButton"));

        horizontalLayout->addWidget(otpExistHelpButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(otpExist);

        QMetaObject::connectSlotsByName(otpExist);
    } // setupUi

    void retranslateUi(QWidget *otpExist)
    {
        otpExist->setWindowTitle(QApplication::translate("otpExist", "Form", 0, QApplication::UnicodeUTF8));
        otpExistLabel->setText(QApplication::translate("otpExist", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Select the OTP copy to work with</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The following OTP copies have been detected on your computer. Select the OTP copy and the corresponding action you would like to perform</p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = otpExistTable1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("otpExist", "OTP installation path", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = otpExistTable1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("otpExist", "Action", 0, QApplication::UnicodeUTF8));
        otpExistCheckBox->setText(QApplication::translate("otpExist", "Show all OTP copies, including those that do not have any applicable action", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = otpExistTable2->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("otpExist", "OTP installation path", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = otpExistTable2->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("otpExist", "Action", 0, QApplication::UnicodeUTF8));
        otpExistLaunchButton->setText(QApplication::translate("otpExist", "Launch OTP Setup wizard", 0, QApplication::UnicodeUTF8));
        otpExistCancelButton->setText(QApplication::translate("otpExist", "Cancel", 0, QApplication::UnicodeUTF8));
        otpExistHelpButton->setText(QApplication::translate("otpExist", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class otpExist: public Ui_otpExist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTPEXIST_H
