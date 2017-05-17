#ifndef __MINIA__GAME__HPP__
#define __MINIA__GAME__HPP__

#include <vector>
#include "gamewindow.hpp"
#include "entity.hpp"

class MiniaEngine
{
private:
    bool is_exiting();
    void game_loop();

    enum class GameState {
        Uninitialized, ShowingSplash, Paused, ShowingMenu, Playing, Exiting
    };

    GameState _gamestate;
    GameWindow _window;
    sf::Sprite _background_sprite;
    sf::Texture _background_texture;
    std::vector<Entity>

public:
    MiniaEngine(const GameWindow::ResolutionSetting&);
    ~MiniaEngine();
    void start(void);

};

#endif
