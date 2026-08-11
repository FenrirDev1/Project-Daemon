#include <raylib.h>
#include <iostream>

#include "Settings.h"

#include "GameManager.h"

#include "Mouse.h"


int main()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
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

    //Update per second calc
    float updateTime = 1000.0f / Settings::UpdatesPerSecond;
   
    GameManager* game = new GameManager();
    game->Initialise();

    Mousemanager* mouse = Mousemanager::Instance();


    std::cout << "Render Scale" << RENDERSCALE << std::endl;



    while (game->WindowOpen())
    {
        BeginDrawing();
        dt = GetFrameTime() * 1000;

        mouse->FramelessUpdate(dt);
        game->FramelessUpdate(dt);

        accdt += dt;
     
        //DrawRectangle(CONVERTFROMGAMETOSCREENWIDTH((1920 - 200)), CONVERTFROMGAMETOSCREENHEIGHT(200), 100 * CONVERTSCREENWIDTHMULT, 100 * CONVERTSCREENHEIGHTMULT, RED);
        //std::cout << MOUSEPOS.x << "," << MOUSEPOS.y << std::endl;

        if (accdt >= updateTime) {
            accdt = 0;

            //PreUpdate
            mouse->PreUpdate();
            game->PreUpdate();

            //Update
            mouse->Update();
            game->Update();

            //PostUpdate
            mouse->PostUpdate();
            game->PostUpdate();
        }


        
        //std::cout<< "FPS: " << GetFPS() << std::endl;
        //std::cout << "dt: " << dt << std::endl;


        EndDrawing();
        
    }

    CloseWindow();
}