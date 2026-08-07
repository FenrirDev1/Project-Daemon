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
	float posx = 0;
	float posy = 0;
	float tilewid = 0;
	float tilehi = 0;
	float mult = std::min(CONVERTSCREENWIDTHMULT, CONVERTSCREENHEIGHTMULT);
	int tileNo = 0;

	for (int y = 0; y < gridheight; y++) 
	{

		for (int x = 0; x < gridwidth; x++)
		{

			posx = Settings::GridStartPosW + (tilewidth * x);
			posy = Settings::GridStartPosH + (tileheight * y);


			if (seccolour) {
				seccolour = !seccolour;
				tiles[tileNo] = new Tile(tileNo, Vector2{ (float)x,(float)y }, Vector2{ posx,posy }, tilewidth, tileheight, tile2_colour);

			}
			else {
				seccolour = !seccolour;
				tiles[tileNo] = new Tile(tileNo, Vector2{ (float)x,(float)y }, Vector2{ posx,posy }, tilewidth, tileheight, tile1_colour);
			}
			tileNo++;
		}
	}
	//const int value = Settings::GridHeight * Settings::GridWidth;
	//int Tiles[value];

}










void GridManager::PreUpdate()
{

}

void GridManager::Update()
{
}

void GridManager::PostUpdate()
{
}

void GridManager::FramelessUpdate(float dt)
{	
	//new

	for (Tile* tile : tiles)
	{
		tile->FramelessUpdate(dt);
	}

}
