#pragma once

#include "HelperMacros.h"

//Change to file reading later -> XML most likely


namespace Settings {
	constexpr int screenWidth = 1920/2;
	constexpr int screenHeight = 1080/2;

	constexpr bool Maximise = false;
	constexpr int FPSTARGET = 120;
	constexpr int UpdatesPerSecond = FPSTARGET;

	constexpr int ExitKey = KEY_DELETE;


	//Stuff below isn't user level settings, will probably refactor to a const header/developersettings instead.

	//Grid

	constexpr int GridWidth = 17;
    constexpr int GridHeight = 17;

	constexpr int TileWidth = 50;
	constexpr int TileHeight = 50;

	constexpr int GridStartPosW = 200;
	constexpr int GridEndPosW = GAMEWIDTH - 200;

	constexpr int GridStartPosH = 200;
	constexpr int GridEndPosH = GAMEHEIGHT - 200;


	//Hand

	//Card Ratio ~ 2.5w to 3.5h

	constexpr float CardScale = 100;

	constexpr float CardHeight = CardScale * 3.5f;
	constexpr float CardWidth = CardScale *2.5f;

	constexpr float CardBordersize = 10.0f;





}
