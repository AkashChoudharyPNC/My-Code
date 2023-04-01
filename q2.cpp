#include <iostream>
using namespace std;

class Animal
{
private:
    int eyes, ears, legs;

public:
    int sound, speed;
    void setData(int a, int b, int c);
    void getData()
    {
        cout << "No. Of eyes of Animal " << eyes << endl;
        cout << "No. of ears of Animal " << ears << endl;
        cout << "No. of legs of Animal " << legs << endl;
        cout << "Speed of Animal " << speed << endl;
        cout << "Sound Of Animal " << sound << endl;
    }
};

void Animal::setData(int a, int b, int c)
{
    eyes = a;
    ears = b;
    legs = c;
}

int main()
{
    Animal Dog;
    Dog.sound = 45;
    Dog.speed = 65;
    Dog.setData(2, 2, 4);
    Dog.getData();

    return 0;
}