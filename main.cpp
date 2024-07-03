#include "mainwindow.h"

#include <QApplication>
<<<<<<< HEAD
=======
#include <QLocale>
#include <QTranslator>
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<< HEAD
=======

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "QWebT_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
>>>>>>> e93b799 (Added some ui elements -- definitely not complete yet.)
    MainWindow w;
    w.show();
    return a.exec();
}
