//WAP the program to create the class for students to get and print the details..

#include <iostream>
using namespace std;
class students{
    public :
    string name;
    int age, roll;
    void input(){
        cout <<"Enter your name : ";
        cin >> name;
        cout << "Enter your age  : ";
        cin >> age;
        cout <<"Enter your roll number : ";
        cin >> roll;
    }
    void print(){
        cout<<"Your name is : " <<name <<endl;
        cout<<"Your age is :" <<age <<endl;
        cout<<"Your roll is :" <<roll <<endl;
    }
};
int main(){
    students output;
    output.input();
    output.print();
    return 0 ;
}