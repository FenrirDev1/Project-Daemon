#include "Tile.h"
#include "Settings.h"
#include "Mouse.h"
#include <iostream>

void Tile::Initialise()
{
	mousePos = &MOUSEPOS;
	HighlightColour = RED;
	CurrentColour = DefaultColour;
}

Tile* Tile::GetTileRight()
{
	if (GridPos != (Settings::GridWidth * Settings::GridHeight) && !((GridPos + 1) % Settings::GridWidth == 0)) {
		return GridRef[TILERIGHT];
	}
	return nullptr;
}

Tile* Tile::GetTileLeft()
{
	if (GridPos != 0 && !((GridPos) % Settings::GridWidth == 0)) {
		return GridRef[TILELEFT];
	}
	return nullptr;
}
Tile* Tile::GetTileAbove()
{
	if (GridPos >= Settings::GridWidth) {
		return GridRef[TILEABOVE];
	}
	return nullptr;
}
Tile* Tile::GetTileBelow()
{
	if (GridPos < (Settings::GridWidth * Settings::GridHeight) - Settings::GridWidth) {
		return GridRef[TILEBELOW];
	}
	
	return nullptr;
}

void Tile::PreUpdate()
{
	if (hovered) {
		CurrentColour = HighlightColour;
		
	}
	else {
		CurrentColour = DefaultColour;
	}


}

void Tile::Update()
{

}

void Tile::PostUpdate()
{
}

void Tile::FramelessUpdate(float dt)
{
	DrawRectangle(CONVERTFROMGAMETOSCREENWIDTH(GamePos.x), CONVERTFROMGAMETOSCREENHEIGHT(GamePos.y), CONVERTFROMGAMETOSCREENWIDTH(width), CONVERTFROMGAMETOSCREENHEIGHT(height), CurrentColour);

	

	if ((mousePos->x <= GamePos.x + width) && (mousePos->x >= GamePos.x) && (mousePos->y <= GamePos.y + height) && (mousePos->y >= GamePos.y))
	{
		hovered = true;
	}
	else {
		hovered = false;
	}

}
