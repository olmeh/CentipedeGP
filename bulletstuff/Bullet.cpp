#include <iomanip>
#include "Bullet.h"
#include "Player.h"


Bullet::Bullet() {
    Player p;
    location.x = p.location.x;
    location.y = p.location.y;

    dir = idle;
    height = 20;
    width = 6;

    red = 0;
    green = 250;
    blue = 0;
}

void Bullet::move(SDL_Plotter& g) {
    erase(g);
    move();
}

void Bullet::move() {
    switch(dir) {
        case bulletUP: if(location.y > 0)
                   location.y -= speed;
            break;
        case idle: location.y += 0;
                   location.x += 0;
            break;
        case moveUP: if(location.y >450)
                    location.y -= speed;
            break;
        case moveDOWN: if(location.y <580)
                    location.y += speed;
            break;
        case moveLEFT: if(location.x >7)
                    location.x -= speed;
            break;
        case moveRIGHT: if(location.x <580)
                    location.x += speed;
            break;
    }
}

void Bullet::shoot(SDL_Plotter& g) {
    erase(g);
    shoot();
}

void Bullet::shoot() {
    switch(dir) {
        case bulletUP: if(location.y > 0)
                   location.y -= speed;
            break;
        case idle: location.y += 0;
                   location.x += 0;
            break;
    }
}

void Bullet::draw(SDL_Plotter& g) {
    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {
            g.plotPixel(location.x + c,location.y + r,red,green,blue);
        }
    }
}

void Bullet::setDir(bulletDirection d) {
    dir = d;
}

void Bullet::setSpeed(int s) {
    speed = s;
}

void Bullet::erase (SDL_Plotter& g) {
    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {
            g.plotPixel(location.x + c,location.y + r, 0, 0, 0);
        }
    }

}
