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

#include "../include/Player.h"
#include "../include/LoadMedia.h"

SDL_Surface* playerImage = SDL_LoadBMP( "../images/Ship.bmp" );
SDL_Rect playerLocation;


Player::Player(){
    location.x = 300;
    location.y = 500;
    playerLocation.x = 300;
    playerLocation.y = 500;

    lives = 3;
    speed = 20;
    dir = RIGHT;
    play = false;
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

void Player::sound()
{
        int soundCount;
        char key;

        //The music that will be played
        Mix_Music *gMusic = NULL;

        //The sound effects that will be used
        Mix_Chunk *gScratch = NULL;
        Mix_Chunk *gHigh = NULL;
        Mix_Chunk *gMedium = NULL;
        Mix_Chunk *gLow = NULL;

        bool success = true;

        //Initialize SDL
        SDL_Init( SDL_INIT_AUDIO );

        Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 );
                soundCount = 0;
                gScratch = Mix_LoadWAV( "laser.wav" );


        switch(play){
        case SPACE: Mix_PlayChannel( -1, gScratch, 0 ) == 1;
            break;
            }
}

void update()
{
    //Change the location of the object
}

bool collidesWith(Player *o)
{
    //Test if the bullet collides with enemy.
    //If it does, make it invisible and return true
}

void shoot(Player *o)
{
    //gets the location of the ship when the spacebar was hit
    // uses those coordinates to shoot a bullet.
    //loop that keeps checking if the bullet has hit an object, or has reached
        // the ceiling.

    //decrease the y to have it move up the screen.
    //once the bullet is deleted, the user can shoot another bullet.
}















