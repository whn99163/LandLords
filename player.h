#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

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
    void getDirection();

    void setType(Type type);
    Type getType();

    void setScore(int score);
    int getScore();
signals:

public slots:

private:
    int m_score;
    QString m_name;
    Role m_role;
    Sex m_sex;
    Direction m_direction;
    Type m_type;
    bool m_isWin;
};

#endif // PLAYER_H
