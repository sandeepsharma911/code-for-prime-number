#include<iostream>
using namespace std;                                 // C++ Inheritance.

// Base Class
class vehicle{
    public:
    string brand="Ford";
    void honk (){
        cout<<"Tuk Tuk"<<"\n";
    }
};

// Derived Class
class car : public vehicle {
    public:
    string model="Mustang";
};
int main(){

    car mycar;
    mycar.honk();
    cout<<mycar.brand + " " + mycar.model;
    return 0;
}