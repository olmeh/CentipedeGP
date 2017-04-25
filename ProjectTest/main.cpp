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
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "include/SDL_Plotter.h"
#include "include/Player.h"
#include "include/Mushrooms.h"
#include "include/Centipede.h"
#include "include/StartScreen.h"

using namespace std;

int main(int argc, char* argv[])
{
    SDL_Plotter GameScreen(700,600);
    Player p;
    char key;
    StartScreen(GameScreen);
    p.setSpeed(10);
    int randMush,xRes,yRes,r,g,b;

    int count = 0;
    Mushrooms shroomies[870];
    fstream file;
    file.open(".\\images\\txt_files\\Mushroom1.txt");
    if(!file) cout << "file not open" << endl;


    for(int i=0; i<29; i++){
        for(int j=0; j<30; j++){
            shroomies[count].setXLoc(i*20+50);
            shroomies[count].setYLoc(j*20);
            count++;
        }
    }
    srand((unsigned)time(0));
    for(int i=0; i<25; i++){
        randMush = rand()%750;
        shroomies[randMush].setActive(true);
    }

    shroomies[41].setActive(true);
    for(int s=0; s<870; s++){
        if(shroomies[s].getActive()){
            file.open(".\\images\\txt_files\\Mushroom1.txt");
            file >> xRes >> yRes;
            cout << "shroom " << s << " is active at (" << shroomies[s].getXLoc() << " , " << shroomies[s].getYLoc() << ")" << endl;
            for(int i=0; i<xRes; i++){
                for(int j=0; j<yRes; j++){
                    file >> r >> g >> b;
                    GameScreen.plotPixel(shroomies[s].getYLoc()+j,shroomies[s].getXLoc()+i,r,g,b);
                }
            }
            file.close();
        }
    }
    cout << shroomies[41].getXLoc() << " " << shroomies[41].getYLoc() << " " << shroomies[41].getActive() << " " << shroomies[41].getDamage();

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
            if(key == ' ')p.sound();
        }


        p.draw(GameScreen);
        GameScreen.update();
    }
    return 0;
}

