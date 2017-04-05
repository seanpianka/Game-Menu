#ifndef __MINIA__GAMEWINDOW__HPP__
#define __MINIA__GAMEWINDOW__HPP__

#include <SFML/Graphics.hpp>
#include <string>
#include <cstdint>

class GameWindow : public sf::RenderWindow
{
private:
    class ResolutionSetting
    {
    public:
        ResolutionSetting(const uint32_t& width, const uint32_t& height)
        : res(width, height) {}
        sf::Vector2u get_resolution() const;
    private:
        sf::Vector2u res;
    };

    double _framerate;
    std::string _title;
    uint32_t _width;
    uint32_t _height;
public:
    GameWindow(const uint32_t&, const uint32_t&, const std::string&,
               const double&);
    void toggle_fullscreen();
    void set_resolution(const ResolutionSetting&);

    static const ResolutionSetting w640h480, w1600h900, w1920h1080, w2560h1440;
};

#endif
