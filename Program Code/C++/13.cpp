#include<iostream>
using namespace std;

// Inline function
inline int product(int a, int b)
{
    // Not recommende to use below lines functions
    //static int c = 0; //This executes only once
    //c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b; //+c;
}

// Default arguments 
float moneyReceived(int currentMoeny, float factor = 2.25){
    return currentMoeny * factor;
}

//constant arguments
// int strlen(const char *p){

// }

int main()
{
    int a, b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have Rs "<<money<<" in your bank account, you will recive Rs "<<moneyReceived(money)<<" after one year "<<endl;
    cout<<"For VIP : if you have Rs "<<money<<" in your bank account, you will recieve Rs "<<moneyReceived(money, 3.0)<<" after one year "<<endl;

    return 0;
}