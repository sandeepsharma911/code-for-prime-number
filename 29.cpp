#include<iostream>
#include<string>
using namespace std;
int myFunction(int x){
    return 10+x;                // Here, this returns the sum of a function with two parameters.
}
string myFunction1(string x,string y){
    return x+y;                 // Here, also we take the return of a function with two parameters of variable string. 
}
int main (){
    cout<<myFunction(5)<<endl;

    cout<<myFunction1("Sandeep"," Sharma.");
    return 0;
}