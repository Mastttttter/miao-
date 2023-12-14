#include <QApplication>
#include <QPushButton>
#include "miao.h"
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    miao widget;
    widget.show();
    return QApplication::exec();
}
