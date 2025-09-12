#ifndef GAMECONTROL_H
#define GAMECONTROL_H

#include <QObject>
#include <robot.h>
#include <userplayer.h>
#include <cards.h>
class GameControl : public QObject
{
    Q_OBJECT
public:
    //游戏状态
    enum GameStatus
    {
        DispatchCard, //发牌
        CallingLord, //叫地主
        PlayingHand //出牌
    };
    //玩家状态
    enum PlayerStatus
    {
        ThinkingForCallLord,
        ThinKingForPlayHand,
        Winning
    };

    //得到玩家的实例对象
    Robot* getLeftrobot();
    Robot* getRightrobot();
    UserPlayer* getUserPlayer();

    //当前玩家设置获取
    void setCurrentPlayer(Player* currentPlayer);
    Player* getCurrentPlayer();

    //出牌玩家及打出的牌获取
    Player* getPendPlayer();
    Cards getPendCards();

    //初始化玩家
    void playerInit();

    //初始化扑克牌
    void initAllCards();

    //每次发一张牌
    Card takeOneCard();
    //得到最后的三张底牌
    Cards getSurplusCards();
    //充值卡牌数据
    void resetCarData();

    explicit GameControl(QObject *parent = nullptr);

signals:

public slots:

private:
    Robot* m_robotLeft;
    Robot* m_robotRight;
    UserPlayer* m_user;
    Player* m_currPlayer;
    Player* m_pendPlayer;
    Cards m_pendCards;
    Cards m_allCards;
};

#endif // GAMECONTROL_H
