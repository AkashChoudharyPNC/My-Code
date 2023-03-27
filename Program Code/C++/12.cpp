#include<iostream>
using namespace std;

// This will not swap x and y
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Call by refrence using pointer 
void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by refrence using c++ refrence variable
void /*int &*/ swapRefrenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    //return a;
}
int main()
{
    int x = 5, y =6;
    cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
    //swap(x,y);  // this will not swap x and y
    //swapPointer(&x,&y); // This will swap x and y using pointer refrence
    swapRefrenceVar(x,y); // This will swap x and y using refrence variable
    //swapRefrenceVar(x,y)=786;
    cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;

    return 0;
}