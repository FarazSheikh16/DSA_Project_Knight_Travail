#include "Knight.h"
#include <iostream>

using namespace std;
Knight::Knight()
{
    //ctor
}

Knight::~Knight()
{
    //dtor
}

int Knight::BFS_traversal(Position Start , Position Dest )
{
    bool flag[9][9]; // Creating Flag list for checking either the node is visited or not
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
            flag[i][j]=false; //marking all indexes as False
    }
    queue<Position> Q;
    flag[Start.x_coordinate][Start.y_coordinate]=true; //marking the given index as True
    Q.push(Start);
    int moves=0;
    while(!Q.empty())
    {
        int curr= Q.size();
        for(int i=0 ; i<curr ; i++)
        {
            Position current= Q.front();
            Q.pop();
            cout<<"Now traversing the co ordinate"<<endl;
            cout<<"x="<<current.x_coordinate<<"y="<<current.x_coordinate<<endl;
            if(current.x_coordinate==Dest.x_coordinate && current.y_coordinate==Dest.y_coordinate)
                return moves;
            for(int j=0 ; j<8 ; j++)
            {
              Position P1(current.x_coordinate+dx[j],current.y_coordinate+dy[j]);
              //cout<<"m="<<P1.x_coordinate<<"n"<<P1.y_coordinate<<endl;
              if( P1.valid_coordinates() && flag[P1.x_coordinate][P1.y_coordinate]==false)
              {
                  Q.push(P1);
                  flag[current.x_coordinate][current.y_coordinate]=true;
              }
            }
        }
        moves++;
    }
    return -1;
}
