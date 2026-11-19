#include<iostream>
using namespace std;

int main(){
	
	int a=5;
	int b=10;
	int c;
	
	a = a+b;
	b = a-b; 
	c = b+a;
	a = a-b; 

    cout <<"a = " << a << endl <<"b = " << b; 
	return 0;
};
