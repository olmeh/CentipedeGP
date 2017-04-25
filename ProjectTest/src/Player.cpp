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
#include "../include/Player.h"
#include "../include/LoadMedia.h"
#include "../include/Mushrooms.h"

fstream file;
int xResl,yResl;

Player::Player(){
    location.x = 300;
    location.y = 550;

    lives = 3;
    speed = 3;
    dir = RIGHT;
    play = false;
    height = 20;
    width = 20;
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
        case UP: if(location.y >500)
                    location.y -= speed;
            break;
        case DOWN: if(location.y <630)
                    location.y += speed;
            break;
        case LEFT: if(location.x >0)
                    location.x -= speed;
            break;
        case RIGHT: if(location.x <580)
                    location.x += speed;
            break;
    }
}
void Player::draw(SDL_Plotter& g){
    file.open(".\\images\\txt_files\\Ship.txt");
    file >> xResl >> yResl;
    for(int r=0; r<yResl; r++){
        for(int c = 0; c < xResl; c++){
            file >> red >> blue >> green;
            if(location.x + c >= 0 && location.x + c < g.getCol()){
                if(location.y + r >= 0 && location.y + r < g.getRow())
                    g.plotPixel(location.x + c,location.y + r,red,green,blue);
            }
        }
    }
    file.close();
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
















