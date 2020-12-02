
#include <iostream>
#include <string>
using namespace std;

class cricketer{ //base class
    public:
    string name[20];
    int age;
    int matches;

    void cricketer_data(){
        cout << "Enter the name age and num of match played" << std::endl;
        cin >> name >> age >>matches;
        }

    void cricketer_data_dispaly(){
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "matches :" << matches << endl;

        }    
}; 

class bowler :public cricketer{ //intermediate class..
public:
    int wickets;

    void bowler_data(){
        cricketer_data();
        cout << "Number of wickets Taken :" <<  endl;
        cin >> wickets;       
    }
    void blower_data_dispaly(){
    cricketer_data_dispaly();
    cout <<"Num of wickets : "<<endl;
    cin >> wickets;
    }



};

class batsman :public bowler{ //derived from class blower..
public:

    int runs;
    int centuries;
    
    void  batsman_data(){
    cricketer_data_dispaly();
    std::cout << "Enter num of runs and centuries" << std::endl;
    cin >> runs >>centuries;
    }
    void batsman_data_dispaly(){
    cricketer_data_dispaly();
    cout <<"Num of runs :" <<runs <<endl; 
    cout <<"Num of  centuries:"<<centuries <<endl; 
        }

    

    
};
int main(){
    bowler bow;
    batsman bat;
    bow.bowler_data();  cout<<endl;
    bat.batsman_data();  cout<<endl;
    cout << "*************************"<<endl;
    bow.blower_data_dispaly() ;cout<<endl;
    bat.batsman_data_dispaly() ; cout<<endl;
    
     
}