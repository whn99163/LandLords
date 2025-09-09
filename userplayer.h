#ifndef USERPLAYER_H
#define USERPLAYER_H

#include"player.h"
#include <QObject>

class UserPlayer : public Player
{
    Q_OBJECT
public:
    using Player::Player;
    UserPlayer();
};

#endif // USERPLAYER_H
