#include "game.hpp"
#include "gamewindow.hpp"
#include "utils.hpp"


MiniaEngine::MiniaEngine(const GameWindow::ResolutionSetting& res)
: _window(res, mg::constants::GAME_TITLE)
{
    _gamestate = GameState::Uninitialized;
}

MiniaEngine::~MiniaEngine()
{
    _window.close();
}

void MiniaEngine::start(void)
{
    if (_gamestate != GameState::Uninitialized) { return; }

    _window.create(sf::VideoMode(_window.get_width(),
                                 _window.get_height()),
                                 _window.get_title());
    _gamestate = GameState::Playing;

    while (!is_exiting())
    {
        game_loop();
    }

    _window.close();
}

bool MiniaEngine::is_exiting()
{
    return _gamestate == GameState::Exiting;
}

void MiniaEngine::game_loop(void)
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
                    _gamestate = MiniaEngine::GameState::Exiting;
                }
                break;
            default:
                break;
        }
    }
}
