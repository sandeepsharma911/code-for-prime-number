#include<iostream>
using namespace std;                            // Note: By default, all members of a class are private if you don't specify an access specifier.
class myclass{
    int x;                                      // Private Attribute.
    int y;                                      // Private Attribute.
};
int main(){
    myclass myobj;
    myobj.x=24;
    myobj.y=30;
    return 0;
}