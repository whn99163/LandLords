#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <cards.h>
class Player : public QObject
{
    Q_OBJECT
public:
    enum Role{Lord,Farmer};
    enum Sex{Man,Woman};
    enum Direction{Left,Right};//头像的显示方位
    enum Type{Robot,User,UnKnow}; //玩家的类型
    explicit Player(QObject *parent = nullptr);
    explicit Player(QString name,QObject *parent = nullptr);

    void setName(QString name);
    QString getName();

    void setRole(Role role);
    Role getRole();

    void setSex(Sex sex);
    Sex getSex();

    void setDirection(Direction direction);
    Direction getDirection();

    void setType(Type type);
    Type getType();

    //玩家的分数
    void setScore(int score);
    int getScore();

    void setWin(bool flag);
    bool isWin();

    //提供玩家的上下家
    void setPrevPlayer(Player* player);
    void setNextPlayer(Player* Player);

    Player* getPrePlayer();
    Player* getNextPlayer();

    //叫地主/抢地主
    void grabLordBet(int point);

    //存储扑克牌（发牌的时候得到的）
    void storeDispatchCard(Card& card);
    void storeDispatchCard(Cards& cards);
    
    //得到所有的牌
    Cards getCards();
    
    //清空玩家手中所有的牌
    void clearCards();
    
    //出牌
    void playHand(Cards& cards);

    //设置出牌的玩家以及待处理的扑克牌
    void setPendingInfo(Player* player,Cards& cards);
    //获取出牌玩家以及待处理的扑克牌
    Player* getPendPlayer();
    Cards getPendCards();

    //虚函数 叫地主/出牌
    virtual void prepareCallLord();
    virtual void preparePlayHand();

signals:

public slots:

protected:
    int m_score;
    QString m_name;
    Role m_role;
    Sex m_sex;
    Direction m_direction;
    Type m_type;
    bool m_isWin;
    Player* m_prev; //当前玩家的上家
    Player* m_next; //当前玩家的下家
    Cards m_cards; // 存储多张扑克牌（玩家手中的牌）
    Cards m_pendCards; //打出的扑克牌
    Player* m_pendPlayer; //打出的扑克牌的所有者
};

#endif // PLAYER_H
