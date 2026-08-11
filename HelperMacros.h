#pragma once
#include "raylib.h"

#define MAX(a, b) ((a)>(b)? (a) : (b))
#define MIN(a, b) ((a)<(b)? (a) : (b))

#define GAMEWIDTH 1920.0f
#define GAMEHEIGHT 1080.0f

//Requires Raylib
#define RENDERSCALE MIN((float)GetScreenWidth()/GAMEWIDTH,(float)GetScreenHeight()/GAMEHEIGHT)
//Requires Raylib
#define CONVERTFROMGAMETOSCREENWIDTH(game) game*RENDERSCALE
//Requires Raylib
#define CONVERTFROMGAMETOSCREENHEIGHT(game) game*RENDERSCALE



//Mouse stuff should be calculated once per framless update and used across as a reference, as to not recalculate as much.

//Source for virtual mouse math https://github.com/raysan5/raylib/blob/master/examples/core/core_window_letterbox.c

//Non Rendered, Don't use unless having a reason -> Requires Raylib
#define RAWMOUSEPOS GetMousePosition()

#define MOUSEPOSUNCLAMPED Vector2{(RAWMOUSEPOS.x - (GetScreenWidth() - (GAMEWIDTH * (float)GetScreenWidth()/GAMEWIDTH)) * 0.5f) / RENDERSCALE,(RAWMOUSEPOS.y - (GetScreenHeight() - (GAMEHEIGHT * (float)GetScreenHeight()/GAMEHEIGHT)) * 0.5f) / RENDERSCALE}

//Requires Raylib
#define MOUSEPOS Vector2Clamp(MOUSEPOSUNCLAMPED,Vector2{ 0, 0 }, Vector2{ (float)GAMEWIDTH, (float)GAMEHEIGHT })
