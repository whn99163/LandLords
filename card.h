#ifndef CARD_H
#define CARD_H

#include <QObject>
#include <QVector>
class Card
{
public:
    Card();

    enum CardSuit{
        CardSuit_begin,
        Diamond,
        Club,
        Heart,
        Spade,
        CardSuit_end
    };

    enum CardPoint{
        CardPoint_begin,
        Card_3,
        Card_4,
        Card_5,
        Card_6,
        Card_7,
        Card_8,
        Card_9,
        Card_10,
        Card_J,
        Card_Q,
        Card_K,
        Card_A,
        Card_2,
        Card_sj, // small jocker
        Card_bj,
        CardPoint_end
    };

    void setPoint(CardSuit cardsuit);
    void setSuit(CardPoint cardpoint);
    CardPoint point();
    CardSuit suit();

private:
    CardSuit m_cardsuit;
    CardPoint m_cardpoint;

};

bool lessSort(Card& card1,Card& card2);
bool GreaterSort(Card& card1,Card& card2);

using CardList = QVector<Card>;
#endif // CARD_H
