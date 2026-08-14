#pragma once

#include "baseobject.h"


class HandManager : BaseObject {

private:

public:

	

	void Initialise() override;
	
	//Frame based Updates

    //Update 1
	void PreUpdate() override;
	//Update 2
	void Update() override;
	//Update 3
	void PostUpdate() override;


	//Works regardless of frame rate -> happens first
	void FramelessUpdate(float dt) override;

};