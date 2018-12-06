#include "widget.h"
#include <QApplication>

#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    w.setGeometry( 100, 100, 200, 120 );

    w.show();

    return a.exec();
}
