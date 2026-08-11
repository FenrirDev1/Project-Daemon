#pragma once
#include "BaseObject.h"
#include "raylib.h"

class Mousemanager : BaseObject{
private:
	static Mousemanager* instance;
protected:
	Mousemanager();


public:
	static Mousemanager* Instance();

	Vector2 MousePos;

    void Initialise() override;

	//Frame based Updates

	//Update 1
	void PreUpdate() override;
	//Update 2
	void Update() override;
	//Update 3
	void PostUpdate() override;


	//Works regardless of frame rate -> happens first
	virtual void FramelessUpdate(float dt);

};