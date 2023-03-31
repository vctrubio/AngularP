#include "../Headers.hpp"
#include "History.hpp"
#include "Game.hpp"


int main()
{
	History	init;

	cout << "hellow world\n";

	Game *ptr;

	ptr = init.newGame();

	ptr->auto4Play();
	ptr->print();
	ptr->run();

	cout << "VS OTHERºn\n";
	ptr->autoPlay();
	ptr->print();
	ptr->run();
}
