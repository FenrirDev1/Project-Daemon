#pragma once


class BaseObject {

public:

	virtual void Initialise() = 0;

	//Frame based Updates

	//Update 1
	virtual void PreUpdate();
	//Update 2
	virtual void Update();
	//Update 3
	virtual void PostUpdate();


	//Works regardless of frame rate -> happens first
	virtual void FramelessUpdate(float dt);

};