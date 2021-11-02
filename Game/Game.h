#pragma once

class Scene;

class Game
{
public:
	bool Initialize();

	void Run();

private:
	void ProcessInput();
	void Update();
	void Render();

private:
	bool _isRun;
	Scene* _currentScene;
};