#include<iostream>
#include<string>
using namespace std;
int main(){

    struct{
        string brand;
        string model;
        int year;
    }myCars1,myCars2,myCars3;

    myCars1.brand="Audi";
    myCars1.model="R8";
    myCars1.year=1900;

    myCars2.brand="Maruti Suzuki";
    myCars2.model="Swift Dezire";
    myCars2.year=1990;

    myCars3.brand="Ford";
    myCars3.model="Mustang";
    myCars3.year=2004;

    cout<<myCars1.brand<<" "<<myCars1.model<<" "<<myCars1.year<<"\n";
    cout<<myCars2.brand<<" "<<myCars2.model<<" "<<myCars2.year<<"\n";
    cout<<myCars3.brand<<" "<<myCars3.model<<" "<<myCars3.year<<"\n";
    return 0;
}