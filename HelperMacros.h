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




//Non Render scaled, Don't use unless having a reason 
// -> Requires Raylib
#define RAWMOUSEPOS GetMousePosition()



//Gets Mouse Position from Mousemanager 
// -> needs to include Mouse.h
#define MOUSEPOS Mousemanager::Instance()->MousePos