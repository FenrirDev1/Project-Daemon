#include "Handelement.h"
#include "Settings.h"

void HandElement::Initialise()
{
	height = Settings::CardHeight;
	width = Settings::CardWidth;
	borderAmount = Settings::CardBordersize;

	//MainColour = WHITE;
	//BorderColour = RED;

	Pos = { 500,200 };
	

}

void HandElement::PreUpdate() {
	
}
void HandElement::Update() {

}
void HandElement::PostUpdate() {

}

void HandElement::FramelessUpdate(float dt) {

	//Border
	DrawRectangle(CONVERTFROMGAMETOSCREENWIDTH(Pos.x), CONVERTFROMGAMETOSCREENHEIGHT(Pos.y), CONVERTFROMGAMETOSCREENWIDTH(width), CONVERTFROMGAMETOSCREENHEIGHT(height), BorderColour);

	//Main
	DrawRectangle(CONVERTFROMGAMETOSCREENWIDTH(Pos.x + borderAmount), CONVERTFROMGAMETOSCREENHEIGHT(Pos.y + borderAmount), CONVERTFROMGAMETOSCREENWIDTH(width - (borderAmount*2)), CONVERTFROMGAMETOSCREENHEIGHT(height - (borderAmount*2)), MainColour);

}
