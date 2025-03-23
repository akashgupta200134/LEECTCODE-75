#include<iostream>
#include<string>
using namespace std;
// concept of getter and setter in oops

// suppose you have a private members and you want to access the memembers outside the calss
// then you have to use the getter and setter function
// getter is used to fetch the value or members
// setter is set the value of members

class Animal
{

private:
    int weight;


    public:
    string name ; 
    int age;

    void eat() {
        cout << "Eating" << endl;
    }

    // this is callled getter function 
    int  getWeight()
    {
        return weight;
    }

    // this is callled setter function 
    void setWeight(int w)
    {
        weight = w;
    }

};



int main(){
 
     Animal Lion ; 

     Lion.name = "Sher Singh"; 
     Lion.age = 25 ; 

     cout << "Name of the Lion is : "<< Lion.name << endl ;
     cout << "Age of the Sher Singh is : "<<Lion.age << endl ;

        Lion.setWeight(106); // here we calling setter to set the value

        // here we are using the getter to fetch the value of member
        cout <<"Weight of Sher Singh is : "<< Lion.getWeight() << endl ;




}