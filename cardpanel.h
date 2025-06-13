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
    void paintEvent(QPaintEvent *event);//绘图事件
    void mousePressEvent(QMouseEvent *event); 

signals:

public slots:

private:
    QPixmap m_front; // 显示正面
    QPixmap m_back; // 显示反面
    bool m_isfront;
    bool m_isselected;
    Card m_card;
    Player* m_owner;
};

// QPixmap（	适用于GUI绘制）和 QImage（适用于图像处理）都是Qt中用于处理图像的类
#endif // CARDPANEL_H
