#include<iostream>
using namespace std;

int c = 45;

int main()
{
    // int a, b, c;
    // cout<<"Enter the value of a : "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b : "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c<<endl;

    //********** float, double and long double literals ************
    // float d = 55.6f;
    // long double e = 55.6l;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // cout<<"The size of 55.6 is "<<sizeof(55.6)<<endl;
    // cout<<"The size of 55.6f is "<<sizeof(55.6f)<<endl;
    // cout<<"THe size of 55.6F is "<<sizeof(55.6F)<<endl;
    // cout<<"The size of 55.6l is "<<sizeof(55.6l)<<endl;
    // cout<<"The size of 55.6L is "<<sizeof(55.6L)<<endl;

    // ************ Refrence Variables *************
    // Akash Choudhary -----> The personality -----> PNCAadami
    // float x = 555;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //*********Type Casting *********
    int a = 55;
    float b = 55.6;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"THe value of a is "<<float(a)<<endl;

    cout <<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(a)<<endl;

    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;



    return 0;
}