#ifndef __MINIA__GAMEWINDOW__HPP__
#define __MINIA__GAMEWINDOW__HPP__

#include <string>
#include <cstdint>
#include <SFML/Graphics.hpp>


class GameWindow : public sf::RenderWindow
{
public:
    struct ResolutionSetting
    {
    public:
        ResolutionSetting(const uint32_t&,
                          const uint32_t&,
                          const uint32_t& = 30);
        sf::Vector2u get_resolution() const;
        uint32_t get_width() const;
        uint32_t get_height() const;
        uint32_t get_framerate() const;
    private:
        uint32_t _width;
        uint32_t _height;
        uint32_t _framerate;
    };

    GameWindow(const ResolutionSetting&, const std::string&);

    void toggle_fullscreen();
    void set_resolution(const ResolutionSetting&);

    std::string get_title() const;
    uint32_t get_height() const;
    uint32_t get_width() const;
    double get_framerate() const;

    static const ResolutionSetting w640h480, w1600h900, w1920h1080, w2560h1440;

private:
    std::string _title;
    ResolutionSetting _res;
};

#endif
