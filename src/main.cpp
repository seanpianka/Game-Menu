#include "gamewindow.hpp"
#include "game.hpp"


int main()
{
    MiniaEngine game(GameWindow::w1600h900);
    game.start();

    return 0;
}
