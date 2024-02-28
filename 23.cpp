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

    cout<<letters[1][1][3];
    return 0;
}