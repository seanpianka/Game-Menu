#include "gamewindow.hpp"

const GameWindow::ResolutionSetting GameWindow::w640h480 = GameWindow::ResolutionSetting(640, 480);
const GameWindow::ResolutionSetting GameWindow::w1600h900 = GameWindow::ResolutionSetting(1600, 900);
const GameWindow::ResolutionSetting GameWindow::w1920h1080 = GameWindow::ResolutionSetting(1920, 1080);
const GameWindow::ResolutionSetting GameWindow::w2560h1440 = GameWindow::ResolutionSetting(2560, 1440);

GameWindow::GameWindow(
    const uint32_t& width, const uint32_t& height, const std::string& title,
    const double& framerate
)
: sf::RenderWindow(sf::VideoMode(width, height), title)
{
    _width = width;
    _height = height;
    _title = title;
    _framerate = framerate;
    setFramerateLimit(framerate);
}

void GameWindow::toggle_fullscreen()
{
}

sf::Vector2u GameWindow::ResolutionSetting::get_resolution() const
{
    return res;
}

void GameWindow::set_resolution(const ResolutionSetting& option)
{
    setSize(option.get_resolution());
}
