#include<iostream>
using namespace std;

class P
{
	public:
		
	float celcious = 50;
};

class Q : public P
{
	public:
	float ferh;
	
	tofFahrenheit(float  celcious)
	{
		cout<<" celcious to fFahrenheit = "<< (celcious * 1.8) + 32<<"f"<<endl;
	}
};

class R : public Q
{
	public:
		
	float kelv;
	
	toKelvin(float  ferh)
	{
		cout<<" fFahrenheit to kelvin = "<< (122 - 32) * 0.56 + 273.15 <<"K"<<endl;
	}
};


int main(){
	
   Q q1;
   
   q1.tofFahrenheit(50);
   
   R r1;
   
   r1.toKelvin();
   
	return 0;
};
