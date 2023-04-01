// Crfeate a function which takes 2 point objects and computes the distance between those 2 points
#include<iostream>
#include<math.h>
using namespace std;

class point
{
    float x, y;
    public:
    friend void distance(point o1, point o2);

    point(float num1 , float num2)
    {
        x = num1;
        y = num2;
    }
    void display()
    {
        cout<<"Coordinate is ("<<x<<","<<y<<")"<<endl;
    }
};

void distance(point o1, point o2)
{
    float distance;
    distance = (pow(o1.x-o2.x,2))+(pow(o1.y-o2.y,2));
    distance = sqrt(distance);
    cout<<"Distance b/w given point is "<<distance<<endl;
}

int main()
{
    point p1(0,5);
    p1.display();
    point p2(3,1);
    p2.display();
    distance(p1,p2);

    return 0;
}