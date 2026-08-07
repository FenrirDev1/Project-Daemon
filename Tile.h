#pragma once

#include <raylib.h>
#include "baseobject.h"

class Tile :BaseObject {

private:

	void Initialise() override;


public:

	int GridPos;
	Vector2 GridCord;
	Vector2 GamePos;

	float width, height;

	Color Colour;


	Tile(int GridPos, Vector2 GridCord,Vector2 GamePos, float width, float height, Color tileColour) : GridPos(GridPos), GridCord(GridCord),GamePos(GamePos), width(width), height(height), Colour(tileColour)
	{};


	//Frame based Updates

	//Update 1
	 void PreUpdate() override;
	//Update 2
	 void Update() override;
	//Update 3
	 void PostUpdate() override;


	//Works regardless of frame rate -> happens first
	 void FramelessUpdate(float dt) override;


};