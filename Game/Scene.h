#pragma once

class Object;

class Scene
{
public:

private:
	bool LoadScene(std::wstring wstrFileName);
	void Update();

private:
	std::list<Object*> _objList;
};
