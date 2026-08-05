#include "GameManager.h"
#include <raylib.h>

void GameManager::Initialise()
{
    // Create managers, load data etc


#pragma region Grid
    
    m_Grid = new GridManager;

    m_Grid->Initialise();

    //Creating hardcoded tilemap

    int tiles[]{
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
    };

    
#pragma endregion Grid


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
  
}

void GameManager::Update()
{
}

void GameManager::PostUpdate()
{
}

void GameManager::FramelessUpdate(float dt)
{
    Input();
    m_Grid->FramelessUpdate(dt);
}



void GameManager::Input()
{
    if(IsKeyPressed(KEY_F11)) {
        ToggleBorderlessWindowed();
    }

    if (IsKeyPressed(KEY_SPACE)) {
        Color temp = m_Grid->tile1_colour;
         m_Grid->tile1_colour = m_Grid->tile2_colour;
        m_Grid->tile2_colour = temp;
    }
}
