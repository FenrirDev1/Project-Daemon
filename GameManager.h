#pragma once
#include "BaseObject.h"

#include "GridManager.h"

class GameManager : BaseObject
{
private:
	//Will close window after being set true
	bool close = false;

	GridManager* m_Grid;


public:



	void Initialise() override;

	bool WindowOpen();

	//Frame based Updates

	//Update 1
	void PreUpdate() override;
	//Update 2
	void Update() override;
	//Update 3
	void PostUpdate() override;


	//Works regardless of frame rate -> happens first
	void FramelessUpdate(float dt) override;


	void Input();





};
