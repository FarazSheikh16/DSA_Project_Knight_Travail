#include <iostream>
#include "Position.h"
#include "Knight.h"
using namespace std;

int main()
{
    cout<<"----------------------Welcome to Project of DSA Group 12 ----------------------"<<endl;
    cout<<"----------------------Project Title : Knight Traivail ----------------------"<<endl;
    int x1,x2,y1,y2;
    cout<<"Enter Current Position of Knight:"<<endl;
    cout<<"X-coordinate:";
    cin>>x1;
    cout<<"Y-coordinate:";
    cin>>y1;
    cout<<"Enter Destination Position of Knight:"<<endl;
     cout<<"X-coordinate:";
    cin>>x2;
    cout<<"Y-coordinate:";
    cin>>y2;
    Position p(x1,y1);
    Position P(x2,y2);
    if(P.valid_coordinates()==false || p.valid_coordinates()==false)
    {
        cout<<"Invalid Co-ordinates entered"<<endl;
        exit(0);
    }
    Knight K(p,P);
    int v=K.BFS_traversal();
    if(v!=-1)
        cout<<"No of Moves taken to reach the Destination is: "<<v;
    else
        cout<<"Invalid Move"<<endl;
    return 0;
}
