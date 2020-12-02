#include <iostream>
using namespace std;

class base1{ //this is first base class..
    public:
    void print_first(){
        cout << "The print message first is here";
    }
};

class base2{ //this is srcond base class..
    public:
    void print_first(){
        cout << "The print message second is here";
    }
}; 

// now inheriting the class child from 2 base class i.e (base1 & base2)
class child :public base1 , public base2{  
    public:
    void sow(){
        base1::print_first();
        cout<<endl;
        base2::print_first();

    }
}; 


int main(){
    child ch;
     
    ch.sow();

     


}
paga