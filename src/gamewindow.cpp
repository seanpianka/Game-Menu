#include "gamewindow.hpp"

const GameWindow::ResolutionSetting GameWindow::w640h480 = GameWindow::ResolutionSetting(640, 480);
const GameWindow::ResolutionSetting GameWindow::w1600h900 = GameWindow::ResolutionSetting(1600, 900);
const GameWindow::ResolutionSetting GameWindow::w1920h1080 = GameWindow::ResolutionSetting(1920, 1080);
const GameWindow::ResolutionSetting GameWindow::w2560h1440 = GameWindow::ResolutionSetting(2560, 1440);

/*===========================================================================*/
/* GameWindow */
/*===========================================================================*/
GameWindow::GameWindow(const ResolutionSetting& res,
                       const std::string& title)
: _res(res)
{
    _title = title;
    setFramerateLimit(res.get_framerate());
}

void GameWindow::toggle_fullscreen()
{
    /* toggle fullscreen */
}

void GameWindow::set_resolution(const ResolutionSetting& res)
{
    setSize(res.get_resolution());
}

uint32_t GameWindow::get_height() const
{
    return _res.get_height();
}

uint32_t GameWindow::get_width() const
{
    return _res.get_width();
}

std::string GameWindow::get_title() const
{
    return _title;
}

double GameWindow::get_framerate() const
{
    return _res.get_framerate();
}

/*===========================================================================*/
/* ResolutionSetting */
/*===========================================================================*/
GameWindow::ResolutionSetting::ResolutionSetting(const uint32_t& width,
                                                 const uint32_t& height,
                                                 const uint32_t& framerate)
: _width(width),
  _height(height),
  _framerate(framerate)
{}

sf::Vector2u GameWindow::ResolutionSetting::get_resolution() const
{
    return sf::Vector2u(_width, _height);
}

uint32_t GameWindow::ResolutionSetting::get_width() const
{
    return _width;
}

uint32_t GameWindow::ResolutionSetting::get_height() const
{
    return _height;
}

uint32_t GameWindow::ResolutionSetting::get_framerate() const
{
    return _framerate;
}

