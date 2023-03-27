//Control Structure in c++ ...types of it
//-->Sequnce structure
//-->Selection structure
//-->loop structure
#include<iostream>
using namespace std;

int main()
{
    cout<<"Control Structer "<<endl;
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;


    // Selection control structure if-else-if ladder
    // if ((age<18)&&(age>0))
    // {
    //     cout<<"u r not allowed"<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"u r a kid and will get a kid pass for party"<<endl;
    // }
    // else if (age<=0)
    // {
    //     cout<<"Piada hoja phle bsdk"<<endl;
    // }
    // else
    // {
    //     cout<<"u r allowed"<<endl;
    // }

    //selection control structure: Switch Case statements
    switch (age)
    {
    case 18:
        cout<<"u r 18"<<endl;
        break;
    case 22:
        cout<<"u r 18"<<endl;
        break;
    case 2:
        cout<<"U r 2"<<endl;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch cases"<<endl;
    
    
    
    return 0;
}