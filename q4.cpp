//Write a C++ program using class to calculate square and cube of given number using inline function .
#include<iostream>
#include<math.h>
using namespace std;

class power
{
    public:
    inline int square(int n)
    {
        return(pow(n,2));
    }
    inline int cube(int n)
    {
        return(pow(n,3));
    }
};

int main()
{
    int n, r;
    power p;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    r=p.square(n);
    cout<<"Square of "<<n<<" is "<<r<<endl;
    r=p.cube(n);
    cout<<"Cube of "<<n<<" is "<<r<<endl;

    return 0;

}