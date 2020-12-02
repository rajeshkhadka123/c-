 //print details of the students using hararichal inheritance

 #include <iostream>
 #include <string>
 using namespace std;
 class father{
    public:
    string name;
    void read_name(){
    cout << "Enter your name";
    cin>> name;
    }
    void print_name(){
        cout << "Your name is ">> name;
    }
 };
 class child1 ::public father{
    public:
    string dep;
    int age;
    void read_depart_age(){
    cout<<"Enter your dep & age ";
    cin >> dep >> age;
    }
    void print_dep_age(){
    cout<<"Your dep is "<<dep<<endl;
    cout<<"Your age is "<<age<<endl;

    }
 };
 class child2 ::public father{
    public:
    
 };
 int main(){
    return 0;
 }