#include <raylib.h>
#include <iostream>

#include "Settings.h"

#include "GameManager.h"

int main()
{

    //Setup Window
    InitWindow(Settings::screenWidth, Settings::screenHeight, "Project Daemon");
    if (Settings::Maximise) {
        MaximizeWindow();
    }

    SetTargetFPS(Settings::FPS);

    //Disable exit key to enable pause menu
    SetExitKey(KEY_NULL);


    GameManager* game = new GameManager();


    while (game->GameLoop())
    {

        //std::cout << "FPS: " << GetFPS() << std::endl;
        
        //Rendering
        BeginDrawing();
        EndDrawing();

    }

    CloseWindow();
}