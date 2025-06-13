#include "gamepanel.h"
#include <QApplication>
#include <iostream>
#include "card.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GamePanel w;
    w.show();

    return a.exec();
}
