#include "pch.h"
#include "Game/Game.h"

int main()
{
	Game game;
	if (game.Initialize())
	{
		game.Run();
	}

	return 0;
}