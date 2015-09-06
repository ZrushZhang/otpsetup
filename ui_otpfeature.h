/********************************************************************************
** Form generated from reading UI file 'otpfeature.ui'
**
** Created: Sun Sep 6 17:20:09 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTPFEATURE_H
#define UI_OTPFEATURE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_otpFeature
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *otpFeatureLabel;
    QTreeView *otpFeatureTreeView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *otpFeatureConfirmButton;
    QPushButton *otpFeatureCloseButton;

    void setupUi(QWidget *otpFeature)
    {
        if (otpFeature->objectName().isEmpty())
            otpFeature->setObjectName(QString::fromUtf8("otpFeature"));
        otpFeature->resize(409, 410);
        gridLayout = new QGridLayout(otpFeature);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        otpFeatureLabel = new QLabel(otpFeature);
        otpFeatureLabel->setObjectName(QString::fromUtf8("otpFeatureLabel"));
        otpFeatureLabel->setWordWrap(true);

        verticalLayout->addWidget(otpFeatureLabel);

        otpFeatureTreeView = new QTreeView(otpFeature);
        otpFeatureTreeView->setObjectName(QString::fromUtf8("otpFeatureTreeView"));
        otpFeatureTreeView->setEditTriggers(QAbstractItemView::CurrentChanged);
        otpFeatureTreeView->header()->setVisible(true);
        otpFeatureTreeView->header()->setDefaultSectionSize(200);
        otpFeatureTreeView->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(otpFeatureTreeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        otpFeatureConfirmButton = new QPushButton(otpFeature);
        otpFeatureConfirmButton->setObjectName(QString::fromUtf8("otpFeatureConfirmButton"));

        horizontalLayout->addWidget(otpFeatureConfirmButton);

        otpFeatureCloseButton = new QPushButton(otpFeature);
        otpFeatureCloseButton->setObjectName(QString::fromUtf8("otpFeatureCloseButton"));

        horizontalLayout->addWidget(otpFeatureCloseButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(otpFeature);

        QMetaObject::connectSlotsByName(otpFeature);
    } // setupUi

    void retranslateUi(QWidget *otpFeature)
    {
        otpFeature->setWindowTitle(QApplication::translate("otpFeature", "Form", 0, QApplication::UnicodeUTF8));
        otpFeatureLabel->setText(QApplication::translate("otpFeature", "You have selected a typical installation. All selected features will be installed. This window is only used to view typical features. To select or deselect specific features, perform a custom installation.", 0, QApplication::UnicodeUTF8));
        otpFeatureConfirmButton->setText(QApplication::translate("otpFeature", "Confirm", 0, QApplication::UnicodeUTF8));
        otpFeatureCloseButton->setText(QApplication::translate("otpFeature", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class otpFeature: public Ui_otpFeature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTPFEATURE_H
