#ifndef __MINIA__GAMEWINDOW__HPP__
#define __MINIA__GAMEWINDOW__HPP__

#include <string>
#include <cstdint>

#include <SFML/Graphics.hpp>


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

    std::string _title;
    uint32_t _width;
    uint32_t _height;
    double _framerate;

public:
    GameWindow(const uint32_t&, const uint32_t&, const std::string&,
               const double&);
    void toggle_fullscreen();
    void set_resolution(const ResolutionSetting&);
    uint32_t get_height();
    uint32_t get_width();
    std::string get_title();
    double get_framerate();


    static const ResolutionSetting w640h480, w1600h900, w1920h1080, w2560h1440;

};

#endif
