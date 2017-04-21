

#include "../include/StartScreen.h"
#include "../include/SDL_Plotter.h"

using namespace std;

void StartScreen(SDL_Plotter& g){
    for(int i=0; i<600; i++){
        for(int j=0; j<600; j++){
            g.plotPixel(i,j,0,0,0);
        }
    g.update();
    }
}
