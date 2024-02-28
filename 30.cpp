#include<iostream>
#include<string>
using namespace std;
int myFunction3(int x,int y){
    return x*y;
}
int main(){

    int z = myFunction3(10,2);          // Here, we can also store the result in a Variable. 
    cout<<z;
}