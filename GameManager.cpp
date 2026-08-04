#include "GameManager.h"
#include <raylib.h>

void GameManager::IntialiseGame()
{
    // Create managers, load data etc

    

    //Creating hardcoded tilemap

    int tiles[]{
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
    };

    

}

bool GameManager::WindowOpen()
{
    if (WindowShouldClose()) {
        return false;
    }
    else {
        return !close;
    }
    //Can add extra logic here
}

void GameManager::PreUpdate()
{
    Input();
}

void GameManager::Update()
{
}

void GameManager::PostUpdate()
{
}

void GameManager::FramelessUpdate(float dt)
{

}



void GameManager::Input()
{
    if(IsKeyPressed(KEY_F11)) {
        ToggleBorderlessWindowed();
    }
}
