#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "SDL_Plotter.h"

using namespace std;

int main()
{
    int r,g,b;

    fstream file;
    string fileName;

    do{
        cout << "Enter File Name: ";
        cin >> fileName;

        file.open(fileName.c_str());

        if(!file) cout << "File Not Found" << endl;
    }while(!file);

    SDL_Plotter image(800,800);

    char key;

    for(int i=0; i<800; i++)){
        for(int j=0; j<800; j++)){
            image.plotPixel(i,j,0,0,0);
        }
    }

    for(int i=0; i<20; i++)){
        for(int j=0; j<20; j++)){
            image.plotPixel(i,j,r,g,b);
        }
    }

    while(!image.getQuit()){
        if(image.kbhit()){
            key = image.getKey();
        }



        image.update();
    }




}
