#ifndef HISTORY_HPP
#define HISTORY_HPP

#include "../Headers.hpp"
#include "Game.hpp"

class Game;

class History
{
	vector<Game*>	_history;
public:
	History(){srand(time(NULL));};
	~History(){};
	Game	*newGame();
};

#endif
