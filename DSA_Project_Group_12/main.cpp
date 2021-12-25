#include <iostream>
#include "Position.h"
#include "Knight.h"
using namespace std;

int main()
{
    Position p(3,3);
    Position P(7,7);
    P.valid_coordinates();
    p.valid_coordinates();
    Knight K;
    int v=K.BFS_traversal(p,P);
    cout<<"n="<<v;
    return 0;
}
