//Variable - local and global
#include<iostream>
using namespace std;

int glo =6;
void sum(){
    int a;
    cout<<glo<<endl;
}
int main()
{
    int glo =9;
    glo=78;
    int a=14, b=15;
    float pi=3.14;
    char c='d';
    bool is_true = false;
    sum();
    cout<<glo<<endl<<is_true<<endl;
    return 0;
}