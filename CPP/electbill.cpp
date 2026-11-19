//electricity bill calculate //
#include<iostream>
using namespace std;

int main(){
	
  int unit, bill=0;
  
  cout<<"your unit !";
  cin>>unit;
  
  if(unit <= 100){
  	bill = unit * 2; // 100*2 = 200 first unit bill//
  }
  else if (unit <= 200){
  	bill = 200 + (unit - 100) * 3;  // pehle unit ka rate 200 multiply by 3 rup rate = 500//
  }
	else {
		bill = 500 + (unit - 100) * 5;
	}
	
	cout<<"my bill = "<<bill;
	
};
