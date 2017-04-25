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

#include <fstream>
#include <string>
#include "../include/SDL_Plotter.h"
#include "../include/Mushrooms.h"
#include "../include/Point.h"

using namespace std;

int xRes, yRes;
int r,g,b;

Mushrooms::Mushrooms(){
    damage = 1;
    location.x = 0;
    location.y = 0;
    active = false;
}
Mushrooms::Mushrooms(int,int,bool,SDL_Plotter&){

}

void Mushrooms::ShroomPlot(fstream shroom, SDL_Plotter& game){
    shroom >> xRes >> yRes;
    cout << xRes << " " << yRes << endl;
    for(int i=0; i<xRes; i++){
        for(int j=0; j<yRes; j++){
            shroom >> r >> g >> b;
            game.plotPixel(location.x,location.y,r,g,b);
        }
    }
}

void Mushrooms::setXLoc(int xLoc){
    x = xLoc;
}
void Mushrooms::setYLoc(int yLoc){
    y = yLoc;
}
void Mushrooms::setActive(bool a){
    active = a;
}
void Mushrooms::setDamage(int d){
    damage = d;
}

int Mushrooms::getXLoc(){
    return x;
}
int Mushrooms::getYLoc(){
    return y;
}
bool Mushrooms::getActive(){
    return active;
}
int Mushrooms::getDamage(){
    return damage;
}
