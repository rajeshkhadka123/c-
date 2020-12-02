#include <iostream>
using namespace std;

//first base class

class A{
	public:
		char name[20]; int age;
		void readPersonal(){
			cout <<"Enter Your Name : ";
			cin >> name;
			cout <<"Enter Your Age : ";
			cin >> age;
			}
		
		void displayPersonal(){
			cout <<"The name is : \t" << name <<endl;
			cout <<"The age is : \t" << age;
		}	
};

//second base class

class B{
	public:
		int sallary; char company[10];
		void readEmpdata(){
			cout <<"Enter Your sallary : \n";
			cin >> sallary;
			cout <<"Enter Your Company Name : \n";
			cin >> company;
		}
		
			void displayEmpdata(){
			cout <<"The Sallary is : \t" << sallary <<endl;
			cout <<"The Company name is : \t" << company;
		}
};
class C : public A , public B{
	public:
		void FinalData(){
			readPersonal();
			readEmpdata();
			displayPersonal();
			displayEmpdata();
			
		}
};
int main(){
	C data;
	data.FinalData();
}
