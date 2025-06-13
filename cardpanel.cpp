#include "cardpanel.h"
#include<QPainter>
CardPanel::CardPanel(QWidget *parent) : QWidget(parent)
{
    m_isfront=true;
}

void CardPanel::setImage(QPixmap &front, QPixmap &back)
{
    m_front = front;
    m_back = back;

    setFixedSize(m_front.size());//调整窗口大小
    updata();//手动更新窗口 调用绘图事件
}

QPixmap CardPanel::getImage(QPixmap &front, QPixmap &back)
{
    return m_front;
}

void CardPanel::setFrontSide(bool flag)
{
    m_isfront=flag;
}

bool CardPanel::isFrontSide()
{
    return m_isfront;
}

bool CardPanel::isSelected()
{
    return m_isselected;
}

void CardPanel::setCard(Card &card)
{
    m_card=card;
}

Card CardPanel::getCard()
{
    return m_card;
}

void CardPanel::setOwner(Player *player)
{
    m_owner=player;
}

Player *CardPanel::getOwner()
{
    return m_owner;
}

void CardPanel::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    if(m_isfront){ //绘制卡牌正面
        p.drawPixmap(rect(),m_front);
    }
    else {
        p.drawPixmap(rect(),m_back);
    }
}

void CardPanel::mousePressEvent(QMouseEvent *event)
{

}
