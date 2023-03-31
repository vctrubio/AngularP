#include "Game.hpp"


Game::Game(): _totalScore(0)
{
    for (int i = 0; i < SIZE; i++)
        _table[i] = rand() % 4 + 1;
    cout << "Game set up\n";
};


void    Game::print()
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << _table[i] << " :vs: " << _pick[i] << endl;
    }
};

void    Game::auto4Play()
{
    int res = rand() % 4 + 1;

    for (int i = 0; i < SIZE; i++)
        _pick[i] = res;
}

void    Game::autoPlay()
{
    for (int i = 0; i < SIZE; i++)
        _pick[i] = rand() % 4 + 1;
}


void    Game::run()
{
    // pair<Set, int>  *ptr;

    for (int i = 0; i < SIZE; i++)
    {
        if (_table[i] == _pick[i])
            _totalScore++;
    }
    cout << score() << " RUN COUNT \n";
}