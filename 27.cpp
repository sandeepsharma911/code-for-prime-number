#include<iostream>
#include<string>
using namespace std;
int main(){

    struct car{
        string brand;
        string model;
        int year;
    };

    car myCar1;
    myCar1.brand="Audi";
    myCar1.model="R8";
    myCar1.year=1990;

    car myCar2;
    myCar2.brand="Ford";
    myCar2.model="Mustang";
    myCar2.year=1970;

    car myCar3;
    myCar3.brand="Maruti Suzuki";
    myCar3.model="Swift Dezire";
    myCar3.year=1966;

    cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<"\n";
    cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year<<"\n";
    cout<<myCar3.brand<<" "<<myCar3.model<<" "<<myCar3.year<<"\n";
    return 0;
}