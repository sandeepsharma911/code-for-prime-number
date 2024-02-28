#include<iostream>
using namespace std;

int main(){

    int savings;
    cin>>savings;

    if (savings>10000)
    {
        if (savings>15000)
        {
            cout<<"Rafting with Rishabh"<<endl;
        }else
        {
            cout<<"Hiking with Shivam"<<endl;
        }
        
        
    }else
    {
        
        cout<<"Trekking with Akshit"<<endl;

    }
    if (savings>4500)
    {
        if (savings>7000)
        {
            cout<<"Dinner at Sukhdev Hotel"<<endl;
        }else
        {
            cout<<"Dinner at Haveli"<<endl;

        }
        
        
    }
    
    
    
    return 0;
}