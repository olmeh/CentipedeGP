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

#include "../include/Player.h"

Player::Player(){
    location.x = 490;
    location.y = 800;

    lives = 3;
    speed = 20;
    height = 20;
    red = 0;
    blue = 0;
    green = 255;
}

void Player::move(){
    switch(dir){
        case UP: location.y -= speed;
            break;
        case DOWN: location.y += speed;
            break;
        case LEFT: location.x -= speed;
            break;
        case RIGHT: location.x += speed;
            break;
    }
}
void Player::move(SDL_Plotter& g){
    erase(g);
    move();
}
void Player::draw(SDL_Plotter& g){
    for(int r=0; r<height; r++){
        for(int c = 0; c < width; c++){
            if(location.x + c >= 0 && location.x + c < g.getCol()){
                if(location.y + r >= 0 && location.y + r < g.getRow())
                    g.plotPixel(location.x + c,location.y + r,red,green,blue);
            }
        }
    }
}
void Player::erase(SDL_Plotter& g){
    for(int r=0; r<height; r++){
        for(int c = 0; c < width; c++){
            g.plotPixel(location.x + c,location.y + r,0,0,0);
        }
    }
}
void Player::setDir(Direction d){
    dir = d;
}
void Player::setSpeed(int s){
    speed = s;
}

















