#include <raylib.h>
#include <iostream>

#include "Settings.h"

#include "GameManager.h"



int main()
{
    //Setup Window
    InitWindow(Settings::screenWidth, Settings::screenHeight, "Project Daemon");
    if (Settings::Maximise) {
        ToggleBorderlessWindowed();
    }

    SetTargetFPS(Settings::FPSTARGET);

    //Disable exit key to enable pause menu
    SetExitKey(Settings::ExitKey);
    
    //deltatime
    float dt =0;
    
    //Accumulated deltatime
    float accdt =0;


   
    GameManager* game = new GameManager();
    while (game->WindowOpen())
    {
        BeginDrawing();
        dt = GetFrameTime() *1000;

        game->FramelessUpdate(dt);

        accdt += dt;
     

        float updateTime = 1000.0f/Settings::UpdatesPerSecond;

        if (accdt >= updateTime) {
            accdt = 0;

            game->PreUpdate();
            game->Update();
            game->PostUpdate();
        }


        
        //std::cout<< "FPS: " << GetFPS() << std::endl;
        //std::cout << "dt: " << dt << std::endl;


        EndDrawing();
        
    }

    CloseWindow();
}