#include <iostream>
using namespace std;
 class parent{
 	private:
 		int a=10;
 		
 		public:
 			int naya;
 			int a = naya;
 	 
 };
 
 class child : public parent{
  private:
 	int b=20;
 	public:
 	
	int sum(); 	
	int print(); 	
 };
 
 
 
 int child ::sum(){
 	int c;
 	c= naya+b;
  
 }
 
  int child ::print(){
  		cout << "The sum of two numbers is" << sum();
  }
 
int main()
{
 	child result;
 	result.sum();
 	result.print();


    return 0;
}

