#ifndef BULLET_H_INCLUDED
#define BULLET_H_INCLUDED

#include "Point.h"

enum bulletDirection {moveUP, moveDOWN, moveLEFT, moveRIGHT, bulletUP, idle};

class Bullet{

    private:
        int speed;
        bulletDirection dir;
        int height, width;
        int red, green, blue;

    public:
        Point location;
        Bullet();
        void move();
        void move(SDL_Plotter& g);
        void shoot();
        void shoot(SDL_Plotter& g);
        void draw(SDL_Plotter& g);
        void erase (SDL_Plotter& g);
        void setDir(bulletDirection);
        void setSpeed(int);

};

#endif // BULLET_H_INCLUDED
