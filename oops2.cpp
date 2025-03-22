#include <iostream>
using namespace std;

class Animal
{ // this is called class creation
 
public:
 // public , private and protected =>  this is called  access modifers whiich is used to access the datamember and memberfunction inside the class and outside the class 

    int age; // this is called data members/state/properties.
    int weight;

    // this is called member function/behaviour
    void eat()
    {

        cout << " Eating is Necessary to live" << endl;
    }

    void sleep()
    {

        cout << " Sleeping is also Necessary to live " << endl;
    }
};

int main()
{
    // this is called Static object Creation
    

    Animal Lion; // this is called object creation
    

     Lion.age = 67 ; 
     Lion.weight  = 190;


    // we use dot(.) operator to acces the object
    // this a way to access the  object
    cout << "print the age of the Lion:  " << Lion.age << endl;
    cout << "Print the Weight of the Lion: " << Lion.weight << endl;
    Lion.eat();
    Lion.sleep() ;


}
