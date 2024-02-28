#include<iostream>
#include<string>
using namespace std;
void myFunction(string country = "Norway")      // A parameter with a default  value is often known as an "optional parameter".
                                                // "Country" is an Optional parameter and "Norway" is Default parameter.
{
    cout<<country<<"\n";
}
int main (){

    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("Australia");
    return 0;
}