#include "../include/Point.h"

using namespace std;

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(int xv, int yv)
{
    x = xv;
    y = yv;
}

void Point::draw(ostream&)
{
    cout << "(" << x << ", " << y << ")";
}

void Point::draw(SDL_Plotter& g)
{
    g.plotPixel(x,y,0,0,0);
}

