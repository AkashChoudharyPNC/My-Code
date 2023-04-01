#include <iostream>
using namespace std;

int main()
{
    int i = 1, j = 6;
    cout << "Table of 6 " << endl;
    do
    {
        cout << j << "*" << i << "=" << i * j << endl;
        i++;
    } while (i <= 10);

    return 0;
}