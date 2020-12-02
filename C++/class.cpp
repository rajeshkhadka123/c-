 #include <iostream>
 class first{
 	public:
 		int roll;
 	int user_get_roll();
	int user_display_roll(); 	
 };
 int first ::user_get_roll(){
 	cout<< "Enter your roll num :"<<endl;
 	cin << roll;
 }
 int first ::user_display_roll(){
 	cout <<"your roll number is :\t"<<user_get_roll();
 }
 
 class second :public first{
 	public:
 	float sub1,sub2;
 	int user_get_subject(); 
 	int user_display_subject(); 
 };
 
 int second ::user_get_subject(){
 	cout << "Enter any 2 sub :"<<endl;
 	cin >>sub1>>sub2;
 }
 int second ::user_display_subject(){
  
 	 cout <<"The marks of subject are :: "<<sub1<<sub2; <<endl;
 }
 class third :public second{
 	public:
 		int returnall(){
 	 cout<<user_get_roll();
 	 cout<<user_display_roll();
 	 cout<<user_get_subject();
 	 cout<<user_display_subject();
 	 float total;
 	 total = su1+sub2;
 	 cout <<"The sum of 2 sub marks is ::\t"<<total <<endl;
 	 
		 }
 
 	
 };
 int main(){
 	third finalres;
 	finalresult.returnall();
 	return 0;
 }
