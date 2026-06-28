#pragma once

class Level
{

private:

protected:
	int map_width;
	int map_height;

	Level(int w, int h) : map_width(w), map_height(h)
	{
	}

public:

	int GetMapWidth() { return map_width; }
	int GetMapHeight() { return map_height; }

};