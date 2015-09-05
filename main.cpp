#include <QtGui/QApplication>
#include <QTextCodec>
#include <QFile>
#include "otpsetup.h"
#include "otpinstall.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());

    QFile file(":/qss/otpsetup.qss");
    file.open(QFile::ReadOnly);
    app.setStyleSheet(file.readAll());

    otpInstall w;
    w.show ();
    w.setFixedSize(800,600);
    /*
    otpsetup w;
    w.show();
    */
    
    return app.exec();
}
