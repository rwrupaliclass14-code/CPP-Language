#include <iostream>
using namespace std;

int main(){
    
    int num, org, rev=0, digit;
    
    cout<<"add number = ";
    cin>>num;
    
    org = num;// num mai jo bhi number add hoga vo org mai copy ho jayega //
    
    while(num > 0){
    	
    	digit = num % 10; // last digit nikalega //   1, 12%10 = 2, 1
    	rev = (rev * 10) + digit; //digit ko ulta number mai add karega // 1,2, 1
    	num = num / 10; //remove last digit // 12, 1, 1/10=0
    	
      	}
      	
      		if(org == rev){
    		cout<<"the number is palindrom = "<<org;
		}
		else{
				cout<<"the number is not palindrom = "<<org;
		}

    return 0;
};

