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
#include "include/SDL_Plotter.h"
#include "include/Player.h"
#include "include/Mushrooms.h"
#include "include/Centipede.h"
#include "include/StartScreen.h"

using namespace std;

int main(int argc, char* argv[])
{
    SDL_Plotter GameScreen(600,600);
    Player p;
    char key;
    StartScreen(GameScreen);
    p.setSpeed(20);



    while(!GameScreen.getQuit()){
        if(GameScreen.kbhit()){
            key = GameScreen.getKey();
            switch(key){
                case RIGHT_ARROW: p.setDir(RIGHT);
                    p.move(GameScreen);
                    break;
                case LEFT_ARROW: p.setDir(LEFT);
                    p.move(GameScreen);
                    break;
                case DOWN_ARROW: p.setDir(DOWN);
                    p.move(GameScreen);
                    break;
                case UP_ARROW: p.setDir(UP);
                    p.move(GameScreen);
                    break;
            }
        }

        p.draw(GameScreen);
        GameScreen.update();
        GameScreen.Sleep(0);

    }

    return 0;
}
