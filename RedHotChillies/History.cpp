#include "History.hpp"


Game   *History::newGame()
{
    Game *tmp = new Game();
    _history.push_back(tmp);
    return tmp;
};