#include "game.hpp"
#include "utils.hpp"


Minia::Minia()
:
_window(minia::constants::WINDOW_HEIGHT, minia::constants::WINDOW_WIDTH,
       minia::constants::GAME_TITLE, minia::constants::DEFAULT_FRAMERATE)
{
}

Minia::~Minia()
{
    _window.Close();
}

void Minia::start(void)
{
    if (_gamestate != GameState::Uninitialized) { return; }

    _window.create(sf::VideoMode(_window.get_width(), _window.get_height()),
                                 _window.get_title());
    _gamestate = GameState::Playing;

    while (!is_exiting())
    {
        game_loop();
    }

    _window.Close();
}

bool Minia:is_exiting()
{
    return _gamestate == GameState::Exiting;
}

void Minia::start(void)
{
    sf::Event current_event;

    while (_window.GetEvent(current_event))
    {
        switch (_gamestate)
        {
            case GameState::Playing:
                _window.Clear(sf::Color(255, 0, 0));
                _window.Display();

                if (current_event.Type == sf::Event::Closed)
                {
                    _gamestate
                }
        }
    }
}
