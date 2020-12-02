	#include <iostream>
	#include <string>
	using namespace std;
	class person{
	public:
	string fname;
	public:
	void get_first_name(){
	cout <<"Enter your First name:\t"<<endl;
	cin>>fname;

	}
	};

	class employee :public person{
	public :
	string lname;
	public:
	void get_last_name(){
	cout <<"Enter your Last name:\t"<<endl;
	cin>>lname;

	}


	};
	class programmer :public employee{
	public:
	string result;
	void result1(){
	get_first_name();
	get_last_name();
	result = fname +  lname;


	}
	void print(){
	cout << "Your name is : \t "<<result;
	}


	};
	int main(){
	programmer finalout;
	finalout.result1();
	finalout.print();
	return 0;
	}
