#include "GridManager.h"
#include "Settings.h"
#include <algorithm>




void GridManager::Initialise()
{
	tilewidth = Settings::TileWidth;
	tileheight = Settings::TileHeight;

	gridwidth = Settings::GridWidth;
	gridheight = Settings::GridHeight;


	bool seccolour = false;
	bool initialCol = false;
	float posx = 0;
	float posy = 0;
	int tileNo = 0;

	float distanceX = tilewidth * gridwidth;
	float distanceY = tileheight * gridheight;


	float gridstartX = Settings::GridStartPosW + (((Settings::GridEndPosW - Settings::GridStartPosW) - distanceX) / 2.0f);
	float gridstartY = Settings::GridStartPosH + (((Settings::GridEndPosH - Settings::GridStartPosH) - distanceY) / 2.0f);


	for (int y = 0; y < gridheight; y++) 
	{
		seccolour = initialCol;
		initialCol = !initialCol;
		for (int x = 0; x < gridwidth; x++)
		{

			posx = (gridstartX)+(tilewidth * x);
			posy = (gridstartY)+(tileheight * y);


			if (seccolour) {
				seccolour = !seccolour;
				tiles[tileNo] = new Tile(tiles, tileNo, Vector2{(float)x,(float)y}, Vector2{posx,posy}, tilewidth, tileheight, tile2_colour);

			}
			else {
				seccolour = !seccolour;
				tiles[tileNo] = new Tile(tiles,tileNo, Vector2{ (float)x,(float)y }, Vector2{ posx,posy }, tilewidth, tileheight, tile1_colour);
			}
			tileNo++;
		}
	}
	//const int value = Settings::GridHeight * Settings::GridWidth;
	//int Tiles[value];

}










void GridManager::PreUpdate()
{
	//Update all tiles

	for (Tile* tile : tiles)
	{
		tile->PreUpdate();
	}

}

void GridManager::Update()
{
	//Update all tiles

	for (Tile* tile : tiles)
	{
		tile->Update();
	}
}

void GridManager::PostUpdate()
{
	//Update all tiles

	for (Tile* tile : tiles)
	{
		tile->PostUpdate();
	}
}

void GridManager::FramelessUpdate(float dt)
{	
	//Update all tiles

	for (Tile* tile : tiles)
	{
		tile->FramelessUpdate(dt);
	}

}
