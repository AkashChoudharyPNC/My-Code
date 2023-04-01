//Write a C++ program using class to calculate simple interest amount use default value for rate.
#include<iostream>
using namespace std;

class SI
{
    public:
    float intrest(float money, float year, float factor = 0.5 )
    {
        return(money*year*factor/100);
    }
};

int main()
{
    float p,y,si;
    SI q;
    cout<<"Enter the princple amount : "<<endl;
    cin>>p;
    cout<<"Enter the time in year : "<<endl;
    cin>>y;
    si=q.intrest(p,y);
    cout<<"Simple intrest of amount "<<p<<" in "<<y<<" year is with intrest of 0.5 % is "<<si<<endl;

    return 0;
}