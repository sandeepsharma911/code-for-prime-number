#include<iostream>
#include<string>
using namespace std;
int main(){

    string food= "Pizza";
    string &meal= food;
    string myName="Sandeep";
    string myName1="Rohit";

    cout<<&food<<"\n";
    cout<<&meal<<"\n";
    cout<<&myName<<"\n";
    cout<<&myName1<<"\n";
    
    return 0;
}