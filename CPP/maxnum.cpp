//maximum number find using if else out of 3//

#include<iostream>
using namespace std;

int main(){
	
	int a = 15, b = 10, c = 20;
	
	if(a > b){
		if(a > c){
			cout<<"a is maximum ";
		}
		else{
			cout<<"c is maximum ";
		}
	}
	else {
		if(b > c){
			cout<<"b is maximum ";
		}
		else{
			cout<<"c is maximum ";
		}
	}
	return 0;
}
