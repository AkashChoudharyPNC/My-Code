//Write a C++ program using class to check maximum of two integer numbers using Inline function and conditional operator.
#include<iostream>
using namespace std;

class Max
{
    public:
    inline float maximum(float a, float b)
    {
        return(a>b?a:b);
    }
};

int main()
{
    float n1,n2;
    Max q;
    cout<<"Enter 1st number "<<endl;
    cin>>n1;
    cout<<"Enter 2nd number "<<endl;
    cin>>n2;
    cout<<"Maximum number is "<<q.maximum(n1,n2); 

    return 0;



}