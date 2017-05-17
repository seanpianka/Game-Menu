#include <iostream>
#include <vector>
#include "gamewindow.hpp"
#include "game.hpp"


int main()
{
    MiniaEngine game(GameWindow::w640h480);
    game.start();

    return 0;
}
