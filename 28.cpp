#include<iostream>
#include<string>
using namespace std;
void myFunction(string fname,int age){
    cout<<fname<<" Byers, "<<age<<" years old.\n";
}
int main (){

    myFunction("Jimmy",19);
    myFunction("Jonathan",20);
    myFunction("Juliet",23);
    return 0;
}