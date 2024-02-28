#include<iostream>
using namespace std;                            // C++ Polymorphism

// Base Class
class Animal{
    public:
    void animalsound(){
        cout<<"The animal makes a sound\n";
    }
};

// Derived Class
class Pig : public Animal{
    public:
    void animalsound(){
        cout<<"The Pig says: Wee Wee\n";
    }
};

// Derived Class
class Dog : public Animal{
    public:
    void animalsound(){
        cout<<"The Dog says: Bow Wow\n";
    }
};
int main(){

    Animal myanimal;
    Pig mypig;
    Dog mydog;

    myanimal.animalsound();
    mypig.animalsound();
    mydog.animalsound();
    return 0;
}