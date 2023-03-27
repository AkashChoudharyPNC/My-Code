#include<iostream>
using namespace std;

// struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// };

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};



int main()
{
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;


    // union money m1;
    // m1.rice=45;    //basically uninon can take only one value at time
    // m1.car= 'A';
    // cout<<m1.car<<endl;

    // ep Akash;
    // struct employee haneef;
    // struct employee Randi;
    // Akash.eId = 1;
    // Akash.favChar = 'A';
    // Akash.salary = 100000;
    // cout<<"The value is "<<Akash.eId<<endl;
    // cout<<"The value is "<<Akash.favChar<<endl;
    // cout<<"The value is "<<Akash.salary<<endl;

    return 0;
}