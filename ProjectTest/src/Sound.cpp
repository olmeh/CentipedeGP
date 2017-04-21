#include "../include/Sound.h"
#include "../include/SDL_Plotter.h"


void Sound2()
{
int soundCount;

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









}
