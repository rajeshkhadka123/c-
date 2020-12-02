//WAP the program to create the class for students to get and print the details of the n number of students..
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
    int usersays;
    students output;
    cout << "Enter the number students to print details";
    cin >> usersays;
    for(int i = 1 ;i<=usersays;i++){
    output.input();
    cout <<endl;
    output.print();
    cout <<endl;
    cout <<"******************************";
    cout <<endl;
    }
    
    return 0 ;
}