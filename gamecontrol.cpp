#include "gamecontrol.h"
#include <QRandomGenerator>
Robot *GameControl::getLeftrobot()
{
    return m_robotLeft;
}

Robot *GameControl::getRightrobot()
{
    return m_robotRight;
}

UserPlayer *GameControl::getUserPlayer()
{
    return m_user;
}

void GameControl::setCurrentPlayer(Player *currentPlayer)
{
    m_currPlayer=currentPlayer;
}

Player *GameControl::getCurrentPlayer()
{
    return m_currPlayer;
}

Player *GameControl::getPendPlayer()
{
    return m_pendPlayer;
}

Cards GameControl::getPendCards()
{
    return m_pendCards;
}

void GameControl::playerInit()
{
    //对象实例化
    m_robotLeft = new Robot("机器人A",this);
    m_robotRight = new Robot("机器人B",this);
    m_user = new UserPlayer("我自己",this);

    //头像的显示
    m_robotLeft->setDirection(Player::Left);
    m_robotRight->setDirection(Player::Right);
    m_user->setDirection(Player::Right);

    //性别
    Player::Sex sex;
    sex = (Player::Sex)QRandomGenerator::global()->bounded(2);
    m_robotLeft->setSex(sex);

    sex = (Player::Sex)QRandomGenerator::global()->bounded(2);
    m_robotRight->setSex(sex);

    sex = (Player::Sex)QRandomGenerator::global()->bounded(2);
    m_user->setSex(sex);

    //出牌顺序
    m_user->setPrevPlayer(m_robotLeft);
    m_user->setNextPlayer(m_robotRight);

    m_robotLeft->setPrevPlayer(m_robotRight);
    m_robotLeft->setPrevPlayer(m_user);

    m_robotRight->setPrevPlayer(m_user);
    m_robotRight->setPrevPlayer(m_robotLeft);

    //指定当前玩家
    m_currPlayer = m_user;
}

GameControl::GameControl(QObject *parent) : QObject(parent)
{

}
