#ifndef ROBOT_H
#define ROBOT_H
#include"player.h"
#include <QObject>

class Robot : public Player
{
    Q_OBJECT
public:
    //继承父类的构造函数
    using Player::Player;
    Robot();
};

#endif // ROBOT_H
