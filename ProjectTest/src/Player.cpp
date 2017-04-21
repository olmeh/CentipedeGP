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
#include "../include/LoadMedia.h"

SDL_Surface* playerImage = SDL_LoadBMP( "../images/Ship.bmp" );
loadMedia(playerImage);
SDL_Rect* playerLocation;


Player::Player(){
    location.x = 300;
    location.y = 500;
    playerLocation.x = 300;
    playerLocation.y = 500;

    lives = 3;
    speed = 20;
    dir = RIGHT;
    height = 20;
    width = 20;
    //playerLocation.h = 20;
    //playerLocation.w = 20;
    red = 255;
    blue = 0;
    green = 0;
}

void Player::move(SDL_Plotter& g){
    erase(g);
    move();
}
void Player::move(){
    switch(dir){
        case UP: if(location.y >450){
                    location.y -= speed;
                    playerLocation.y -= speed;
                }
            break;
        case DOWN: if(location.y <580)
                    location.y += speed;
                    playerLocation.y += speed;
            break;
        case LEFT: if(location.x >0)
                    location.x -= speed;
                    playerLocation.x -= speed;
            break;
        case RIGHT: if(location.x <580)
                    location.x += speed;
                    playerLocation.x += speed;
            break;
    }
}
void Player::draw(SDL_Plotter& g){
    if(location.x + c >= 0 && location.x + c < g.getCol()){
        if(location.y + r >= 0 && location.y + r < g.getRow())
            SDL_BlitSurface(playerImage, playerLocation, g, NULL)
    }
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

















