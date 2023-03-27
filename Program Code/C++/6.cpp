#include<iostream>
using namespace std;

int main()
{
    /*Loops in c++
    There are three types of loops in c++
        1. For loop
        2. While loop
        3. do-While loop*/
    // Syntax of for loop
    // for (initialization; condition; updation)
    // {
    //     /* code */
    // }
    

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<i<<endl;
    // }

    /*While loop in c++
    syntax:
    while(condition)
    {
        (code)
    }*/
    // int i = 0;
    // while (i<=10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    // syntax of do-while loop
    // do
    // {
    //     /* code */
    // } while (/* condition */);
    int i=0;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=10);
    
    
    

    return 0;
    
}