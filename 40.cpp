#include<iostream>
using namespace std;                                // Access Specifiers.
class myclass{                                      // If you try to access a private member, an error occurs.
    public:                                         // error: y is private.
    int x;
    private:
    int y;
};
int main(){

    myclass myobj;
    myobj.x=25;
    myobj.y=50;
    return 0;
}