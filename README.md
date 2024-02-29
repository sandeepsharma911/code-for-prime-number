#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 2; i <= n; i++){
        if (n%i==0){
            cout<<"Non-Prime"<<"\n";
            break;
        }else
        {
            cout<<"Prime"<<"\n";
            break;
        }  
    }
    
    return 0;
}
// correct this code when i enter 9 an 15 in input it shows prime.
