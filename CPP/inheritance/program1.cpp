//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
// Class RBI -> Class SBI
// Class RBI -> Class BOB
// Class RBI -> Class ICICI
// inherit rate attribute and getROI() method in all child classes//

#include<iostream>
using namespace std;

class RBI
{
	protected:
	float rate ;
	
	public:
	void setROI()
	{
		cout<< "rate = "<<rate;
	};
	
};

class SBI : public RBI
{
	rate = this-> rate;
	
	void getROI()
	{
		cout<< "rate = "<<rate
	};
}

int main(){
	
	SBI sbi;
	
	sbi.getROI();
	return 0;
}

