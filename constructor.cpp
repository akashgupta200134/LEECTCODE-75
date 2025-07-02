
#include <iostream>
using namespace std;

class Animal
{

private:
    int weight;

public: // iske neeche sab public hai,  constristor bhi isliye private data memeber =>weight ke iye bhi constructor chal raha hai lakin agar constructor ko bhi private kar diya jaye to oo bhi nhi chalega  outside the class.
    int age;
    string name;

    // ye default constructor hai ye chalega weight ke liye bhi q ki humne isko public me define kiya hai 
    Animal()
    {
        this->weight = 0;

        cout << "Constructor called" << endl;
    }
};

int main()
{

    Animal a; // static allocation 
    Animal* b = new Animal(); // dynamic allocation

    return 0;
}
