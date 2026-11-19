//find the magic number //

#include<iostream>
using namespace std;

int main(){
	
	int num, sum = 0, mult = 1; 
	
	cout<<"add the number =";
	cin>>num; //123 = 6
	

    int original = num;

    while (num > 0) {
    	
        int digit = num % 10;
        sum = sum + digit; 
        mult = mult * digit;
        num = num / 10;
    }

    if (sum == mult)
        cout << original << "magic number hai";
    else
        cout << original << "magic number nahi hai";
	
	return 0;
}
