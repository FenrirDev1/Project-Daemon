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

	for (int x = 0; x < gridwidth; x++)
	{

		for (int y = 0; y < gridheight; y++) {

			if (seccolour) {
				seccolour = !seccolour;
				DrawRectangle(x * tilewidth, y * tileheight, tilewidth, tileheight, tile2_colour);
			}
			else {
				seccolour = !seccolour;
				DrawRectangle(x * tilewidth, y * tileheight, tilewidth, tileheight, tile1_colour);
			}
		}
	}
}
