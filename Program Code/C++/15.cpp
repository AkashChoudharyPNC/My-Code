//Function overloading
#include<iostream>
using namespace std;

int sum(float a, int b){
    cout<<"Using function with 2 arguments "<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments "<<endl;
    return a+b+c;
}

//Volume of cylinder
int volume(double r, int h){
    return(3.14*r*r*h);
}

//Volume of cube
int  volume(int a){
    return(a*a*a);
}

//volume of cuboid
int volume(int l, int b, int h){
    return(l*b*h);
}

int main()
{
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6 and 9 is "<<sum(3,6,9)<<endl;
    cout<<"The volume of cylinder radius 7 and height 22 is "<<volume(7,22)<<endl;
    cout<<"The volume of cuboid of 4, 5 and 6 is "<<volume(4,5,6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;

    return 0;
}