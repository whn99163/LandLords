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

Card::CardPoint Card::point()
{
    return m_cardpoint;
}

Card::CardSuit Card::suit()
{
    return m_cardsuit;
}


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
