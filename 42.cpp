#include<iostream>
#include<string>                                    // C++ Constuctor defined outside the Class.
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    car(string x, string y, int z);
};
car::car(string x, string y, int z){
    brand=x;
    model=y;
    year=z;
}
int main(){

    car myobj1("Ford","Mustang",2004);
    car myobj2("Audi","X5",1999);
    car myobj3("Maruti Suzuki","Swift Dezire",1969);

    cout<<myobj3.brand<<" "<<myobj3.model<<" "<<myobj3.year<<"\n";
    cout<<myobj1.brand<<" "<<myobj1.model<<" "<<myobj1.year<<"\n";
    cout<<myobj2.brand<<" "<<myobj2.model<<" "<<myobj2.year<<"\n";
    return 0;
}