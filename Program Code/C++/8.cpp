#include<iostream>
using namespace std;

int main()
{
    //Pointer ---> data type which hold the address of other data types

    int a=3;
    int *b = &a;
    //& ---> Address of operartor
    cout<<"Address of a is "<<b<<endl;
    cout<<"Address of a is "<<&a<<endl;

    // * ---> (Value at) Derefrence operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int **c = &b;
    cout<<"THe address of b is "<<&b<<endl;
    cout<<"THe address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;


    return 0;
}