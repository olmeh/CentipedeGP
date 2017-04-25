/*
*   Name:
*   Project:
*
*/

#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include <ostream>
#include "SDL_Plotter.h"

using namespace std;

struct Point
{
    public:
        int x, y;

        Point();
        Point(int xy, int yv);
        void draw(ostream&);
        void draw(SDL_Plotter&);
};

#endif // POINT_H_INCLUDED
