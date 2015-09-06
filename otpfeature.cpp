#include "otpfeature.h"
#include "ui_otpfeature.h"
#include <QtGui>
#include <QStringList>

otpFeature::otpFeature(QWidget *parent)
{
    setupUi(this);

    otpFeature_icon.insert(QString("treeitem_project"),QIcon(":/images/treeitem_project.png"));
    otpFeature_icon.insert(QString("treeitem_folder"),QIcon(":/images/treeitem_folder.png"));

    QStringList title;
    title << QString("View Features") << QString("Information");
    QStandardItemModel *otpFeatureModel = new QStandardItemModel;
    otpFeatureTreeView->setModel(otpFeatureModel);
    otpFeatureModel->setHorizontalHeaderLabels(title);
    otpFeatureTreeView->setHeaderHidden(false);

    QStandardItem *otpFeatureProject = new QStandardItem(otpFeature_icon.value("treeitem_project"),QString("OTP Server Component"));
    otpFeatureModel->appendRow(otpFeatureProject);
    otpFeatureModel->setItem(otpFeatureProject->index().row(),1,new QStandardItem(QString("aaaaaaaaa")));

    QStandardItem *otpFeatureServer = new QStandardItem(otpFeature_icon.value("treeitem_project"),QString("OTP Support"));
    otpFeatureProject->appendRow(otpFeatureServer);
    otpFeatureProject->setChild(otpFeatureServer->index().row(),1,new QStandardItem(QString("aaaaaaaaa")));

    QStandardItem *otpFeatureGridview = new QStandardItem(otpFeature_icon.value("treeitem_project"),QString("Gridview platform support"));
    otpFeatureProject->appendRow(otpFeatureGridview);
    otpFeatureProject->setChild(otpFeatureGridview->index().row(),1,new QStandardItem(QString("aaaaaaaaa")));

    QStandardItem *otpFeature32bit = new QStandardItem(otpFeature_icon.value("treeitem_project"),QString("32-bit system enviroment"));
    otpFeatureProject->appendRow(otpFeature32bit);
    otpFeatureProject->setChild(otpFeature32bit->index().row(),1,new QStandardItem(QString("aaaaaaaaa")));

    QStandardItem *otpFeatureRadius = new QStandardItem(otpFeature_icon.value("treeitem_folder"),QString("Radius support"));
    otpFeatureServer->appendRow(otpFeatureRadius);
    otpFeatureServer->setChild(otpFeatureRadius->index().row(),1,new QStandardItem(QString("aaaaaaaaa")));

    QStandardItem *otpFeatureAdminTools = new QStandardItem(otpFeature_icon.value("treeitem_folder"),QString("Administration tools support"));
    otpFeatureServer->appendRow(otpFeatureAdminTools);
    otpFeatureServer->setChild(otpFeatureAdminTools->index().row(),1,new QStandardItem(QString("aaaaaaaaa")));

    QStandardItem *otpFeatureHotStandby = new QStandardItem(otpFeature_icon.value("treeitem_folder"),QString("Hot-standby feature support"));
    otpFeatureServer->appendRow(otpFeatureHotStandby);
    otpFeatureServer->setChild(otpFeatureHotStandby->index().row(),1,new QStandardItem(QString("aaaaaaaaa")));

    for(int i=0;i<otpFeatureModel->rowCount;i++){
        otpFeatureTreeView->indexAt(QPoint(i,0));

        }
    }


    otpFeatureTreeView->expandAll();
}


