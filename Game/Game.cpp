#include "pch.h"
#include "Game.h"

bool Game::Initialize()
{
    _isRun = true;
    return true;
}

void Game::Run()
{
    while (_isRun)
    {
        ProcessInput();
        Update();
        Render();
    }
}

void Game::ProcessInput()
{
}

void Game::Update()
{
}

void Game::Render()
{
}
