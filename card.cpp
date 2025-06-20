#include "Card.h"

Card::Card()
{

}

void Card::setPoint(Card::CardSuit cardsuit)
{
    m_cardsuit=cardsuit;
}

void Card::setSuit(Card::CardPoint cardpoint)
{
    m_cardpoint=cardpoint;
}

Card::CardPoint Card::point() const
{
    return m_cardpoint;
}

Card::CardSuit Card::suit() const
{
    return m_cardsuit;
}

//从小排序
bool lessSort(Card &card1, Card &card2)
{
    if(card1.point()==card2.point())
        return card1.suit()<card2.suit();
    return card1.point()<card2.point();
}

bool GreaterSort(Card &card1, Card &card2)
{
    if(card1.point()==card2.point())
        return card1.suit()<card2.suit();
    return card1.point()>card2.point();
}

uint qHash(const Card &card)
{
    return card.point()*100+card.suit();
}

bool operator ==(const Card &left, const Card &right)
{
    return (left.point() == right.point() && left.suit() == right.suit());
}
