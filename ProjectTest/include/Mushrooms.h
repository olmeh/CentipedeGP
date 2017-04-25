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

#ifndef MUSHROOMS_H_INCLUDED
#define MUSHROOMS_H_INCLUDED

#include <string>
#include "SDL_Plotter.h"
#include "Point.h"

using namespace std;

class Mushrooms{
private:
    Point location;
    int x,y,damage;
    bool active;

public:
    Mushrooms();
    Mushrooms(int,int,bool,SDL_Plotter&);
    void ShroomPlot(fstream, SDL_Plotter&);

    void setXLoc(int);
    void setYLoc(int);
    void setActive(bool);
    void setDamage(int);
    int getXLoc();
    int getYLoc();
    bool getActive();
    int getDamage();


};
#endif // MUSHROOMS_H_INCLUDED
