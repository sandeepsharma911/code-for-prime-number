#include<iostream>
#include<string>
using namespace std;
int main(){

      string letters[2][4][4]={
        {
            {"A","B","C","D"},
            {"E","F","G","H"},
            {"I","J","K","L"},
            {"M","N","O","P"}
            },
        {
            {"Q","R","S","T"},
            {"U","V","W","X"},
            {"Y","Z","AA","AB"},
            {"AC","AD","AE","AF"}
            }
    };

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0;  k < 4; k++){
                cout<<letters[i][j][k]<<"\n";
                
            }
            
        }
        
    }
    
    return 0;
}