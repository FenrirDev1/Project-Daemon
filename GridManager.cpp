#include "GridManager.h"
#include "Settings.h"

void GridManager::Initialise()
{
	gridwidth = Settings::GridWidth;
	gridheight = Settings::GridHeight;

	tilewidth = Settings::TileWidth;
	tileheight = Settings::TileHeight;

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
	bool seccolour = false;
	float posx = 0;
	float posy = 0;
	float tilewid = 0;
	float tilehi = 0;

	for (int x = 0; x < gridwidth; x++)
	{

		for (int y = 0; y < gridheight; y++) {

			tilewid = tilewidth * CONVERTSCREENWIDTHMULT;
			tilehi = tileheight * CONVERTSCREENHEIGHTMULT;
			posx = x * tilewid + CONVERTFROMGAMETOSCREENWIDTH(200);
			posy = y * tilehi + CONVERTFROMGAMETOSCREENWIDTH(200);

			

			if (seccolour) {
				seccolour = !seccolour;
				DrawRectangle(posx, posy, tilewid, tilehi, tile2_colour);
			}
			else {
				seccolour = !seccolour;
				DrawRectangle(posx, posy, tilewid, tilehi, tile1_colour);
			}
		}
	}
}
