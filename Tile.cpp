#include "Tile.h"
#include "Settings.h"

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



	DrawRectangle(CONVERTFROMGAMETOSCREENWIDTH(GamePos.x), CONVERTFROMGAMETOSCREENHEIGHT(GamePos.y), CONVERTFROMGAMETOSCREENWIDTH(width), CONVERTFROMGAMETOSCREENHEIGHT(height), Colour);


}
