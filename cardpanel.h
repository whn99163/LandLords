#ifndef CARDPANEL_H
#define CARDPANEL_H

#include <QObject>
#include <QWidget>
#include <card.h>
#include <player.h>
// 卡牌窗口类
class CardPanel : public QWidget
{
    Q_OBJECT
public:
    explicit CardPanel(QWidget *parent = nullptr);

    //设置获取图片函数
    void setImage(QPixmap &front,QPixmap &back);
    QPixmap getImage(QPixmap &front,QPixmap &back);

    //扑克牌显示哪一面
    void setFrontSide(bool flag);

    //是否显示正面
    bool isFrontSide();

    //记录窗口是否被选中了
    bool isSelected();

    //扑克牌的花色及点数
    void setCard(Card& card);
    Card getCard();

    //扑克牌的所有者
    void setOwner(Player* player);
    Player* getOwner();
protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
signals:

public slots:

private:
    QPixmap m_front;
    QPixmap m_back;
    bool m_isfront;
    bool m_isselected;
    Card m_card;
    Player* m_owner;
};

#endif // CARDPANEL_H
