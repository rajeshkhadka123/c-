#include <iostream>
using namespace std;

//creating a class called Person..
class A{
	public:
		int a,b;
		void readnumber(){
		cout << "Enter any Number : ";
		cin >> a >>b;	
		}
};
class B : public A{
	public:
		int sum;
		void calculate(){
			 sum = a+b;
		}
};
class C : public B {
	public:
	void display(){
		readnumber();
		calculate();
		cout << "The Sum is " << sum;
	}
};
 
int main(){
C data;
data.display();
return 0;
		
}
 
