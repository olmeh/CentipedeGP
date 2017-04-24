/*
* Group Members:
*   Olmeh Salinas
*   Christian Hansen
*   Emmanuel Ngong
*   Billy Roberson
*   Josh Moisand
* Assignment Name: Centipede Game
* Assignment Description: Create the game Centipede.
*/

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "../include/Point.h"

enum Direction{UP,DOWN,LEFT,RIGHT};;

enum PlaySound{SPACE};;

class Player{
private:
    Point location;
    int lives;
    int speed;
    bool play;
    Direction dir;
    int height, width;
    int red, green, blue;

public:
    Player();

    void move();
    void move(SDL_Plotter& g);
    void draw(SDL_Plotter& g);
    void erase(SDL_Plotter& g);
    void setDir(Direction);
    void setSpeed(int);
    void sound();

};

#endif // PLAYER_H_INCLUDED
