#include<iostream>
#include<string>
using namespace std;                        // C++ Classes and Objects.
class studentID{                            /* Class is a user-defined datatype that has its own data members and member functions whereas an */
    public:                                 /* object is an instance of class by which we can access the data members and member functions of the class.*/
    string name;                             
    string standard;
    int rollno;
};
int main(){

    studentID student1;
    student1.name="Sandeep Sharma";
    student1.standard="class:12th";
    student1.rollno=28;

    studentID student2;
    student2.name="Akshit";
    student2.standard="class:12th";
    student2.rollno=21;

    studentID student3;
    student3.name="Rishabh";
    student3.standard="class:12th";
    student3.rollno=25;

    studentID student4;
    student4.name="Shivam";
    student4.standard="class:12th";
    student4.rollno=13;

    cout<<student1.name<<" "<<student1.standard<<" "<<student1.rollno<<"\n";
    cout<<student2.name<<" "<<student2.standard<<" "<<student2.rollno<<"\n";
    cout<<student3.name<<" "<<student3.standard<<" "<<student3.rollno<<"\n";
    cout<<student4.name<<" "<<student4.standard<<" "<<student4.rollno<<"\n";
    return 0;
}