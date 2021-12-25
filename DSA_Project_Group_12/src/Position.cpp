#include "Position.h"
#include <iostream>

using namespace std;
Position::Position()
{
    x_coordinate=0;
    y_coordinate=0;
}

Position::Position(int x, int y)
{
    x_coordinate=x;
    y_coordinate=y;
}

bool Position::valid_coordinates()
{
    if((x_coordinate<0 || x_coordinate>8 ) || (y_coordinate<0 || y_coordinate>8))
    {
        return false;
    }
}

Position::~Position()
{
    //dtor
}
