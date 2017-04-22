#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "SDL_Plotter.h"

using namespace std;

int main(int argc, char* argv[])
{
    int xRes,yRes,r,g,b;

    fstream file;
    string fileName;

    do{
        cout << "Enter File Name: ";
        cin >> fileName;

        file.open(fileName.c_str());

        if(!file) cout << "File Not Found" << endl;
    }while(!file);

    file >> xRes >> yRes;

    SDL_Plotter GameScreen;
    char key;

    for(int i=0; i<xRes; i++){
        for(int j=0; j<yRes; j++){
            file >> r >> g >> b;
            cout << r << " " << g << " " << b << endl;
            GameScreen.plotPixel(i,j,r,g,b);
        }
    }

    while(!GameScreen.getQuit()){
        if(GameScreen.kbhit()){
            key = GameScreen.getKey();
        }
        GameScreen.update();
    }



}
