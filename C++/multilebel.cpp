 #include <iostream>
 using namespace std;
 class first{
 	public:
 		int roll=0;
 		
  user_get_roll(){
 	cout<< "Enter your roll num :\t";
 	cin >> roll;
 }
 
user_display_roll(){
 	cout <<"your roll number is :\t"<<roll;
 }	
 
 };

 
 class second :public first{
 	public:
 	float sub1=0,sub2=0;
 	int user_get_subject(); 
 	int user_display_subject(); 
 };
 
 int second ::user_get_subject(){
 	cout << "Enter any 2 sub :"<<endl;
 	cin >>sub1>>sub2;
 }
 int second ::user_display_subject(){
  
 	 cout <<"The marks of subject are :: "<<sub1 <<"\t" <<"and" <<"\t" <<sub2<<endl;
 }
 class third :public second{
 	public:
 		int returnall(){
 	  user_get_roll();
 	  user_display_roll();
 	  cout <<endl;
 	  user_get_subject();
 	  user_display_subject();
 	 float total;
 	 total = sub1+sub2;
 	 cout <<"The sum of 2 sub marks is :"<<total <<endl;
 	 }
 };
 int main(){
 	third finalres;
 	finalres.returnall();
 	return 0;
 }
