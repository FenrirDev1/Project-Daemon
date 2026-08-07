#pragma once
#include "Tile.h"
#include "Settings.h"

class GridManager : BaseObject {

private:

	int tilewidth, tileheight, gridwidth,gridheight;

	Tile* tiles[Settings::GridHeight * Settings::GridWidth];

public:
	Color tile1_colour = GREEN;
	Color tile2_colour = DARKGREEN;


	void Initialise() override;

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