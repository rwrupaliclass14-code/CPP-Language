//grade calculate for student by using nested if else //

#include<iostream>
using namespace std; 

int main(){
	
	int score, grade;
	
	cout<<"enter your score = ";
	cin>>score;
	
	if(score >=90 && score<=100 ){
		cout<<"your grade is A ";
	}
	else if (score >=70 && score<=89 ){
		cout<<"your grade is B ";
	}
		else if (score >=60 && score<=79 ){
		cout<<"your grade is C ";
	}
		else if (score >=50 && score<=59){
		cout<<"your grade is D ";
	}
	else {
		cout<<"Sorry you are fail your grade is F ";
	}
	
	return 0;
}
