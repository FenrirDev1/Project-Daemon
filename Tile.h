#pragma once

#include <raylib.h>
#include "baseobject.h"
#include "Settings.h"

#define TILEABOVE GridPos - Settings::GridWidth
#define TILEBELOW GridPos + Settings::GridWidth
#define TILELEFT GridPos - 1
#define TILERIGHT GridPos + 1


class Tile :BaseObject {

private:

	void Initialise() override;


public:

	Vector2* mousePos;

	Tile* (&GridRef)[Settings::GridHeight * Settings::GridWidth];


	bool hovered = false;

	int GridPos;
	Vector2 GridCord;
	Vector2 GamePos;

	float width, height;

	Color DefaultColour;
	Color HighlightColour;
	Color CurrentColour;


	Tile(Tile* (&GridRef)[Settings::GridHeight * Settings::GridWidth], int GridPos, Vector2 GridCord, Vector2 GamePos, float width, float height, Color tileColour) : GridRef(GridRef), GridPos(GridPos), GridCord(GridCord), GamePos(GamePos), width(width), height(height), DefaultColour(tileColour)
	{
		Initialise();
	};


	//QueryFunctions

	//Returns Null if out of bounds
	Tile* GetTileRight();
	//Returns Null if out of bounds
	Tile* GetTileLeft();
	//Returns Null if out of bounds
	Tile* GetTileAbove();
	//Returns Null if out of bounds
	Tile* GetTileBelow();


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