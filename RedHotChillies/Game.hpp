#ifndef GAME_HPP
#define GAME_HPP

#include "../Headers.hpp"
#include "History.hpp"

#define SIZE 4
class Set;

class Game
{
	int		_totalScore;
	int		_table[4];
	int		_pick[4];

public:
	Game();
	~Game(){};

	void 	print();
	void 	auto4Play();
	void 	autoPlay();
	void	run();
	int		score(){return _totalScore;};
};



#endif
