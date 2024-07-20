#ifndef GAMEPANEL_H
#define GAMEPANEL_H

#include <QMainWindow>

namespace Ui {
class GamePanel;
}

class GamePanel : public QMainWindow
{
    Q_OBJECT

public:
    explicit GamePanel(QWidget *parent = 0);
    ~GamePanel();

private:
    Ui::GamePanel *ui;
};

#endif // GAMEPANEL_H
