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


void Mousemanager::FramelessUpdate(float dt) {
	MousePos = MOUSEPOS;
}