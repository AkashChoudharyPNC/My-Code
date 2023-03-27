#include<iostream>
using namespace std;

int main()
{
    int array[]={45,65,78,98,24};
    //You can change value an array
    array[2]=95;
    // cout<<"The content in array are : "<<endl;
    // int i=0;
    // do
    // {
    //     cout<<"The value at array["<<i<<"] is "<<array[i]<<endl;;
    //     i++;
    // } while (i<5);

    /*Pointer Arithmatic
    address new = address old + i* sizeof(data type)*/

    //Pointers and arrays
    int *p = array;
    // cout<<"The value at array[o] "<<*p<<endl;
    // cout<<"The value at array[1] "<<*(p+1)<<endl;
    // cout<<"The value at array[2] "<<*(p+2)<<endl;
    // cout<<"The value at array[3] "<<*(p+3)<<endl;
    // cout<<"The value at array[4] "<<*(p+4)<<endl;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;


    return 0;
}