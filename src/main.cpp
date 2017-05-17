#include <iostream>
#include <vector>
#include "gamewindow.hpp"
#include "game.hpp"


int main()
{
    MiniaGame game(GameWindow::w640h480);
    game.start();

    return 0;
}
