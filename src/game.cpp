#include "game.hpp"
#include "utils.hpp"


Minia::Minia()
:
_window(minia::constants::WINDOW_HEIGHT, minia::constants::WINDOW_WIDTH,
       minia::constants::GAME_TITLE, minia::constants::DEFAULT_FRAMERATE)
{
    _gamestate = GameState::Uninitialized;
}

Minia::~Minia()
{
    _window.close();
}

void Minia::start(void)
{
    if (_gamestate != GameState::Uninitialized) { return; }

    _window.create(sf::VideoMode(_window.get_height(), _window.get_width()),
                                 _window.get_title());
    _gamestate = GameState::Playing;

    while (!is_exiting())
    {
        game_loop();
    }

    _window.close();
}

bool Minia::is_exiting()
{
    return _gamestate == GameState::Exiting;
}

void Minia::game_loop(void)
{
    sf::Event current_event;

    while (_window.pollEvent(current_event))
    {
        switch (_gamestate)
        {
            case GameState::Playing:
                _window.clear(sf::Color(255, 0, 0));
                _window.display();

                if (current_event.type == sf::Event::Closed)
                {
                    _gamestate = Minia::GameState::Exiting;
                }
                break;
        }
    }
}
