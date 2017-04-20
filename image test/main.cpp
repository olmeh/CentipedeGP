#include <iostream>
#include "SDL2/SDL.h"
//Using SDL and standard IO

#include <stdio.h>

//Screen dimension constants

using namespace std;
bool init();

bool loadMedia();

void close();

SDL_Window* gWindow = NULL;

SDL_Surface* gScreenSurface = NULL;

SDL_Surface* gHelloWorld = NULL;


const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 1000;


int main( int argc, char* args[] )
{
    //Start up SDL and create window
    if( !init() )
    {
        cout<< "Failed to initialize!\n" <<endl;
    }
    else
    {
        //Load media
        if( !loadMedia() )
        {
            cout<< "Failed to load media!\n" <<endl;
        }
        else
        {
            //Apply the image
            SDL_BlitSurface( gHelloWorld, NULL, gScreenSurface, NULL );


            //Update the surface
            SDL_UpdateWindowSurface( gWindow );

             //Wait two seconds
            SDL_Delay( 2000 );
        }
    }

    //Free resources and close SDL
    close();

    return 0;
}




bool init()
{
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        // cout << "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() <<endl;
        success = false;
    }
    else
    {
        //Create window
        gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL )
        {
            //cout<< "Window could not be created! SDL_Error: %s\n", SDL_GetError() <<endl;
            success = false;
        }
        else
        {
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface( gWindow );
        }
    }

    return success;
}



bool loadMedia()
{
    //Loading success flag
    bool success = true;

    //Load splash image
    gHelloWorld = SDL_LoadBMP( "FC53 (1).BMP" );
    if( gHelloWorld == NULL )
    {
        printf( "Unable to load image %s! SDL Error: %s\n", "02_getting_an_image_on_the_screen/hello_world.bmp", SDL_GetError() );
        success = false;
    }

    return success;
}




void close()
{
    //Deallocate surface
    SDL_FreeSurface( gHelloWorld );
    gHelloWorld = NULL;

    //Destroy window
    SDL_DestroyWindow( gWindow );
    gWindow = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}

