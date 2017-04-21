#include <cstdlib>
#include <string>
#include "../include/LoadMedia.h"
#include "../include/SDL_Plotter.h"

using namespace std;

bool loadMedia(string image){
    bool success = true;

    img = SDL_LoadBMP(image.c_str());
    if( img == NULL )
    {
        printf( "Unable to load image. ", SDL_GetError() );
        success = false;
    }

    return success;
}

