#include <iostream>
#include <vector>
#include "gamewindow.hpp"
#include "game.hpp"

void process_events(GameWindow&, std::vector<sf::CircleShape>&);


int main()
{
    Minia game;
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
