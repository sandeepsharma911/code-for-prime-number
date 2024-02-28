 #include<iostream>
 using namespace std;
 int main(){

    char button;
    cout<<"Which drink do you want? "<<endl;
    cin>>button;

    switch (button){
    case 'A':
        cout<<"Coca-Cola";
        break;
        case 'B':
        cout<<"Pepsi";
        break;
        case 'C':
        cout<<"Marinda";
        break;
        case 'D':
        cout<<"Mountain Dew";
        break;
        case 'E':
        cout<<"Appy Fizz";
        break; 
    default: cout<<"Drink is not available right now! ";
        break;
    }
    return 0;
 }

