#ifndef KNIGHT_H
#define KNIGHT_H
#include "Position.h"
#include <queue>

using namespace std;

class Knight
{
    public:
        Knight();
        Knight(Position S, Position D);
        void valid_move();
        int BFS_traversal();
        ~Knight();
    private:
        int dx[8]={-1 , -2 , -1 , -2 , 1 , 2 , 1 , 2};
        int dy[8]={-2 , -1 , 2 , 1 , -2 , -1 , 2 , 1};
        Position Start;
        Position Dest;
};

#endif // KNIGHT_H
