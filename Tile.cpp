#include "Tile.h"
#include "Settings.h"
#include <raymath.h>
#include <iostream>

void Tile::Initialise()
{
}

void Tile::PreUpdate()
{
}

void Tile::Update()
{
}

void Tile::PostUpdate()
{
}

void Tile::FramelessUpdate(float dt)
{


	if ((MOUSEPOS.x <= GamePos.x + width) && (MOUSEPOS.x >= GamePos.x) && (MOUSEPOS.y <= GamePos.y + height) && (MOUSEPOS.y >= GamePos.y))
	{
		
		DrawRectangle(CONVERTFROMGAMETOSCREENWIDTH(GamePos.x), CONVERTFROMGAMETOSCREENHEIGHT(GamePos.y), CONVERTFROMGAMETOSCREENWIDTH(width), CONVERTFROMGAMETOSCREENHEIGHT(height), RED);
	}
	else {
		
		DrawRectangle(CONVERTFROMGAMETOSCREENWIDTH(GamePos.x), CONVERTFROMGAMETOSCREENHEIGHT(GamePos.y), CONVERTFROMGAMETOSCREENWIDTH(width), CONVERTFROMGAMETOSCREENHEIGHT(height), Colour);
	}
}
