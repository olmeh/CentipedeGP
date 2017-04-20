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

class Mushrooms{
private:
    int x,y,damage;
    bool active;

public:
    Mushrooms();
    Mushrooms(int,int,bool,SDL_Plotter&);

    void ShroomPlot(int,SDL_Plotter&);


};

#endif // MUSHROOMS_H_INCLUDED
