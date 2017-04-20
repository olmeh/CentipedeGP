/*
* Group Members:
*   Olmeh Salinas
*   Christian Hansen
*   Emmanuel Ngong
*   Billy Roberson
*   Josh -something-
* Assignment Name: Centipede Game
* Assignment Description: Create the game Centipede.
*/

#include <iostream>
#include "SDL_Plotter.h"
#include "Player.h"
#include "Mushrooms.h"
#include "Centipede.h"
#include "StartScreen.h"

using namespace std;

int main(int argc, char* argv[])
{
    SDL_Plotter GameScreen(1000,1000);
    StartScreen(GameScreen);

    char key;

    while(!GameScreen.getQuit()){
        if(GameScreen.kbhit()){
            key = GameScreen.getKey();
        }




    }

    return 0;
}
