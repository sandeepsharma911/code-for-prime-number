#include<iostream>
#include<string>
using namespace std;                                            // C++ Function Overloading.
string myFunc(string fname,string lname){
    return fname+lname;
}
int myFunc(int x,  int y){
    return x+y;
}
double myFunc( double x, double y){
    return x+y;
}
int main(){

    int myInt=myFunc(100,200);
    double myDouble=myFunc(2.2,4.432);
    string myString=myFunc("Sandeep Kumar"," Sharma");

    cout<<"Int: "<<myInt<<endl;
    cout<<"Double: "<<myDouble<<endl;
    cout<<"String: "<<myString<<endl;
    return 0;
}