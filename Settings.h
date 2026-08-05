#pragma once

//Change to file reading later -> XML most likely

namespace Settings {
	constexpr int screenWidth = 1920/2;
	constexpr int screenHeight = 1080/2;

	constexpr bool Maximise = false;
	constexpr int FPSTARGET = 120;
	constexpr int UpdatesPerSecond = 5;

	constexpr int ExitKey = KEY_DELETE;


	//Grid

	constexpr int GridWidth = 25;
    constexpr int  GridHeight = 25;

	constexpr int TileWidth = 20;
	constexpr int TileHeight = 20;

	



}

#define GAMEWIDTH 1920.0f
#define GAMEHEIGHT 1080.0f

#define CONVERTSCREENWIDTHMULT (GetScreenWidth()/GAMEWIDTH)
#define CONVERTSCREENHEIGHTMULT (GetScreenHeight()/GAMEHEIGHT)

#define CONVERTFROMGAMETOSCREENWIDTH(game) game*CONVERTSCREENWIDTHMULT
#define CONVERTFROMGAMETOSCREENHEIGHT(game) game*CONVERTSCREENHEIGHTMULT