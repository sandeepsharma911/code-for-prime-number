#include<iostream>                                                      // C++ Inside Class Methods.
using namespace std;
class myclass{
    public:
    void mymethod(){
        cout<<"Hello World! "<<"\n";
    }
};
int main(){

    myclass myobj;
    myobj.mymethod();
    return 0;
}