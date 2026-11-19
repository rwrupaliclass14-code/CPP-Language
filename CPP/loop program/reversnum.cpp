// find the revers number //

#include<iostream>
using namespace std;

int main(){
	
	int num, temp, digit, rev=0;
	
	cout<<"add number = ";
	cin>>num;
	
	temp = num;
	
	while(num > 0){
		
		 digit = num % 10;
		 rev = (rev * 10) + digit;
		 num = num / 10;
		
	}
	
	if(temp == rev){
		cout<<"the number is revers = ";
	}
	else{
		cout<<"the number is not revers = ";
	}
	
	return 0;
}
