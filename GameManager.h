#pragma once
#include "Level.h"

class GameManager
{
	//Will close window after being set true
	bool close = false;



public:

	void IntialiseGame();

	bool WindowOpen();

	//Frame based Updates

	//Update 1
	void PreUpdate();
	//Update 2
	void Update();
	//Update 3
	void PostUpdate();


	//Works regardless of frame rate -> happens first
	void FramelessUpdate(float dt);


	void Input();

private:



};
