/********************************************************************************
** Form generated from reading UI file 'gamepanel.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPANEL_H
#define UI_GAMEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamePanel
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GamePanel)
    {
        if (GamePanel->objectName().isEmpty())
            GamePanel->setObjectName(QStringLiteral("GamePanel"));
        GamePanel->resize(400, 300);
        menuBar = new QMenuBar(GamePanel);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        GamePanel->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GamePanel);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GamePanel->addToolBar(mainToolBar);
        centralWidget = new QWidget(GamePanel);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GamePanel->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GamePanel);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GamePanel->setStatusBar(statusBar);

        retranslateUi(GamePanel);

        QMetaObject::connectSlotsByName(GamePanel);
    } // setupUi

    void retranslateUi(QMainWindow *GamePanel)
    {
        GamePanel->setWindowTitle(QApplication::translate("GamePanel", "GamePanel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GamePanel: public Ui_GamePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPANEL_H
