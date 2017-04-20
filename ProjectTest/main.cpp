#include <iostream>
#include "SDL_Plotter.h"


using namespace std;

int main(int argc, char* argv[])
{
    SDL_Plotter GameScreen(1000,1000);

    char key;

    while(!GameScreen.getQuit()){
        if(GameScreen.kbhit()){
            key = GameScreen.getKey();
        }

        cout << "Hellor World." << endl;

    }

    return 0;
}
