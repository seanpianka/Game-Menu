#include <iostream>
#include <vector>
#include "gamewindow.hpp"

void process_events(GameWindow&, std::vector<sf::CircleShape>&);

namespace minia
{
    namespace constants
    {
        const uint32_t WINDOW_HEIGHT = 1080;
        const uint32_t WINDOW_WIDTH  = 1920;
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
    std::vector<sf::CircleShape> batch_circles;

    sf::CircleShape head(100.f);
    head.setFillColor(sf::Color::Green);

    batch_circles.push_back(head);

    while (window.isOpen())
    {
        process_events(window, batch_circles);
    }

    return 0;
}

void process_events(GameWindow& window, std::vector<sf::CircleShape>& batch_circles)
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
    for (sf::CircleShape& shape : batch_circles)
    {
        window.draw(shape);
    }
    window.display();
}
