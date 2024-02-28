#include<iostream>
using namespace std;                            // C++ Encapsulation.
class Employee{
    private:
    int salary;
    public:
    void setsalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;
    }
};
int main(){

    Employee myobj;
    myobj.setsalary(20000);
    cout<<myobj.getsalary();
    return 0;
}