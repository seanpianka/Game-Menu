#include <iostream>
#include "gamewindow.hpp"


namespace minia
{
    namespace constants
    {
        const uint32_t WINDOW_HEIGHT = 320;
        const uint32_t WINDOW_WIDTH  = 480;
        const std::string GAME_TITLE = "Minia";
        const double& DEFAULT_FRAMERATE = 60;
    };
};


int main()
{
    GameWindow window(
        minia::constants::WINDOW_WIDTH,
        minia::constants::WINDOW_HEIGHT,
        minia::constants::GAME_TITLE,
        minia::constants::DEFAULT_FRAMERATE
    );

    sf::CircleShape head(100.f);
    head.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(head);
        window.display();
    }

    return 0;
}
