#include "Mouse.h"
#include "HelperMacros.h"
#include <raymath.h>

Mousemanager* Mousemanager::instance = 0;

Mousemanager::Mousemanager()
{

}

Mousemanager* Mousemanager::Instance()
{
	if (instance == 0) {
		instance = new Mousemanager();
	}
	return instance;
}

void Mousemanager::Initialise()
{

}



void Mousemanager::PreUpdate() {

}

void Mousemanager::Update() {

}

void Mousemanager::PostUpdate() {

}

//Source for virtual mouse math https://github.com/raysan5/raylib/blob/master/examples/core/core_window_letterbox.c

void Mousemanager::FramelessUpdate(float dt) {
	Vector2 Mouseposunclamped{ (RAWMOUSEPOS.x - (GetScreenWidth() - (GAMEWIDTH * (float)GetScreenWidth() / GAMEWIDTH)) * 0.5f) / RENDERSCALE,(RAWMOUSEPOS.y - (GetScreenHeight() - (GAMEHEIGHT * (float)GetScreenHeight() / GAMEHEIGHT)) * 0.5f) / RENDERSCALE };
	MousePos = Vector2Clamp(Mouseposunclamped, Vector2{ 0, 0 }, Vector2{ (float)GAMEWIDTH, (float)GAMEHEIGHT });
}