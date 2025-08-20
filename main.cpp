#include "gamepanel.h"
#include <QApplication>
#include <iostream>
#include "card.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "Logger.h"//引入自制的日志类

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GamePanel w;
    w.show();

    return a.exec();
}
