#pragma once
#include "baseobject.h"
#include <raylib.h>

class HandElement : BaseObject 
{
private:

	float height, width,borderAmount;
	Color MainColour, BorderColour;

	Vector2 Pos;

	//Title // draw at top of card, unless body null, then draw at middle of card.
	//Body


public:
	

	// std::function<void> resolutionFunc; /* Might use this instead of resolve if I want less hardcoded classes*/

	//If "Card" is activated, what does it do?
	virtual void Resolve() = 0;

	// Inherited via BaseObject

	virtual void Initialise() override;

	//Update 1
	virtual void PreUpdate();
	//Update 2
	virtual void Update();
	//Update 3
	virtual void PostUpdate();


	//Works regardless of frame rate -> happens first
	virtual void FramelessUpdate(float dt);

};


// Note, with hardcoded classes, it does allow for more unique implementations of skills etc, at the cost of linear classes being assigned the data depended on skill.

// For now chose to go with hardcoded classes due to quicker setup and ease, might refacor and rework into a different system down the line.