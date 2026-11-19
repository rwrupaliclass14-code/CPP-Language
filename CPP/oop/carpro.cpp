#include<iostream>
#include <string>
using namespace std;

class car
{
	public :
		int modelNo;
		string modelName;
		string color;
		string companyName;
		double price;
		bool isEv;
		
		void setCar(int mno, string mname, string clr, string cname, double prc, bool isev)
		{
			modelNo = mno;
			modelName = mname;
			color = clr;
			companyName = cname;
			price = prc;
			isEv = isev;
		}
		
		void showCar()
		{
			cout<<"model number ="<<modelNo<<endl;
			cout<<"model name ="<<modelName<<endl;
			cout<<"model color ="<<color<<endl;
			cout<<"company name ="<<companyName<<endl;
			cout<<"car price ="<<price<<endl;
			cout<<"model is Ev ="<<isEv<<endl;
			cout<<endl;
			
		}
};

int main(){
	
	car a, b, c;
	
	a.setCar(123, "GLA399", "red", "Benz", 890000, "isEv");
	b.setCar(345, "GLA78", "black", "Maruti", 1200000, "isEv");
	c.setCar(3543, "GLA3956", "white", "TATA", 900000, "isEv");	
	
	a.showCar();
	b.showCar();
	c.showCar();
	
	return 0;
};
