//Fibonacci program//

#include<iostream>
using namespace std;

int main(){
	
	int i, n1=0, n2=1, temp;
	
	for(i=0; i<=5; i++){
		
		temp = n1 + n2;
		n1 = n2; //old store num n2=1//
		n2 = temp; // sum of n1 and n2 value in temp is add in  n2//
		
			cout<<temp<<endl;
	}

	return 0;
}
