#include <iostream>
using namespace std;
//class for taking value;
class km{
	public:
		float km;
		float result;
		void takeaData(){
			cout <<"Enter the Distance in Kilometer : ";
			cin >> km;
		}
		void Calculate(){
			result = km*1000;
			cout <<"The " << km <<" km " << " is equal to " << result<< " m ";
		}
};
int main(){
	km data;
	data.takeaData();
	data.Calculate();	
}
