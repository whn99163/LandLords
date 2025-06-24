#include "player.h"

Player::Player(QObject *parent) : QObject(parent)
{

}

void Player::setName(QString name)
{
    m_name=name;
}

QString Player::getName()
{
    return m_name;
}

void Player::setRole(Player::Role role)
{
    m_role = role;
}

Player::Role Player::getRole()
{
    return m_role;
}

void Player::setSex(Player::Sex sex)
{
    m_sex=sex;
}

Player::Sex Player::getSex()
{
    return m_sex;
}

void Player::setDirection(Player::Direction direction)
{
    m_direction = direction;
}

void Player::getDirection()
{
    return m_direction;
}

void Player::setType(Player::Type type)
{
    m_type = type;
}

Player::Type Player::getType()
{
    return m_type;
}

void Player::setScore(int score)
{
    m_score = score;
}

int Player::getScore()
{
    return m_score;
}
