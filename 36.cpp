#include<iostream>                                                      // C++ Outside Class Methods.
using namespace std;
class myclass{
    public:
    void mymethod();
};
void myclass::mymethod(){
    cout<<"Hello World! "<<"\n";
}
int main(){

    myclass myobj;
    myobj.mymethod();
    return 0;
}