
// There are two type of header file :
// 1. System defined header file 
#include<iostream>

//2. User defined header file: it is written by prgmr
//#include "this.h" --> this will produce an error if it is not present in current directory

using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"Hello Akash!"<<endl;
    cout<<"Operator in c++"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    
    //Arithmetic operators
    cout<<"a+b = "<<a+b<<endl;
    cout<<"a-b = "<<a-b<<endl;
    cout<<"a*b = "<<a*b<<endl;
    cout<<"a/b = "<<a/b<<endl;
    cout<<"a%b = "<<a%b<<endl;
    cout<<"a++ = "<<a++<<endl;
    cout<<"a-- = "<<a--<<endl;
    cout<<"++a = "<<++a<<endl;
    cout<<"--a = "<<--a<<endl;
    cout<<endl;

    //Assignment Operators --> used to assing values to variables
    //int a = 3, b = 9;
    //char d = 'd';

    //Comparison operators
    cout<<"Following are the comparison operators in c++"<<endl;
    cout<<"a == b "<<(a==b)<<endl;
    cout<<"a!=b "<<(a!=b)<<endl;
    cout<<"a>=b "<<(a>=b)<<endl;
    cout<<"a<=b "<<(a<=b)<<endl;
    cout<<"a>b "<<(a>b)<<endl;
    cout<<"a<b "<<(a<b)<<endl;
    cout<<endl;

    //logical operators
    cout<<"Following are the logical operators in c++ "<<endl;
    cout<<"((a==b)&&(a<b)) "<<((a==b)&&(a<b))<<endl;
    cout<<"((a==b)||(a<b)) "<<((a==b)||(a<b))<<endl;
    cout<<"(!(a==b)) "<<(!(a==b))<<endl;

    return 0;
}