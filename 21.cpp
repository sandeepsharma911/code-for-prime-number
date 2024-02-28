#include<iostream>
#include<string>
using namespace std;

    struct car{
        string brand;
        string model;
        int year;
    };

int main(){

    car myCars1;
    myCars1.brand="Audi";
    myCars1.model="R8";
    myCars1.year=1900;

    car myCars2;
    myCars2.brand="Maruti Suzuki";
    myCars2.model="Swift Dezire";
    myCars2.year=1990;

    car myCars3;
    myCars3.brand="Ford";
    myCars3.model="Mustang";
    myCars3.year=2004;

    cout<<myCars1.brand<<" "<<myCars1.model<<" "<<myCars1.year<<"\n";
    cout<<myCars2.brand<<" "<<myCars2.model<<" "<<myCars2.year<<"\n";
    cout<<myCars3.brand<<" "<<myCars3.model<<" "<<myCars3.year<<"\n";
    return 0;
}