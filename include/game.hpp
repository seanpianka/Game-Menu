#ifndef __MINIA__GAME__HPP__
#define __MINIA__GAME__HPP__

#include "gamewindow.hpp"

// game class
class Minia
{
private:
    bool is_exiting();
    void game_loop();

    enum class GameState {
        Uninitialized, ShowingSplash, Paused, ShowingMenu, Playing, Exiting
    };

    GameState _gamestate;
    GameWindow _window;
    std::string _window_title;
    uint32_t _window_width;
    uint32_t _window_height;
    double _default_framerate;

public:
    Minia();
    ~Minia();
    void start(void);

};

#endif
