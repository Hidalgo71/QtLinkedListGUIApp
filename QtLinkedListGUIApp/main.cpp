#include "QtLinkedListGUIApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtLinkedListGUIApp w;
    w.show();
    return a.exec();
}
