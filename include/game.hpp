#ifndef __MINIA__GAME__HPP__
#define __MINIA__GAME__HPP__

#include "gamewindow.hpp"

class MiniaGame
{
private:
    bool is_exiting();
    void game_loop();

    enum class GameState {
        Uninitialized, ShowingSplash, Paused, ShowingMenu, Playing, Exiting
    };

    GameState _gamestate;
    GameWindow _window;

public:
    MiniaGame(const GameWindow::ResolutionSetting&);
    ~MiniaGame();
    void start(void);

};

#endif
