#pragma once

#include "HelperMacros.h"

//Change to file reading later -> XML most likely

namespace Settings {
	constexpr int screenWidth = 1920/2;
	constexpr int screenHeight = 1080/2;

	constexpr bool Maximise = false;
	constexpr int FPSTARGET = 120;
	constexpr int UpdatesPerSecond = 5;

	constexpr int ExitKey = KEY_DELETE;


	//Grid

	constexpr int GridWidth = 21;
    constexpr int  GridHeight = 11;

	constexpr int TileWidth = 50;
	constexpr int TileHeight = 50;

	constexpr int GridStartPosW = 200;
	constexpr int GridEndPosW = GAMEWIDTH - 200;

	constexpr int GridStartPosH = 200;
	constexpr int GridEndPosH = GAMEHEIGHT - 200;


	



}
