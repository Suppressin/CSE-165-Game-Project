#include <iostream>
#include "Game.h"

using namespace std;
using namespace sf;


int main()
{
	srand(static_cast<unsigned>(time(NULL)));

	Game game;

	//Game Loop
	while (game.running() && !game.getEndGame())
	{
		//Update
		game.update();

		//Render
		game.render();
	}

	return 0;
}