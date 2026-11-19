// employ details //

#include<iostream>
using namespace std;

class employ
{
	public:
		
		string employName;
		string companyName;
		string email;
		string roll;
		int id;
		double sallary;
		
		void setEmploy(string ename, string cname, string eml, string rol, int iD, double slry)
		{
		 employName = ename;
		 companyName = cname;
		 email = eml;
		 roll = rol;
		 id = iD;
		 sallary = slry;
		}
		
		void getEmploydata()
		{
		   cout<< employName<<endl;
		   cout<< companyName<<endl;
		   cout<< email<<endl;
		   cout<< roll<<endl;
	       cout<< id<<endl;
	       cout<< sallary<<endl;
		}
};

int main(){
	
	employ a, b;
	
	a.setEmploy("ritika", "intell", "kritika@gmail.com","HR", 766, 1503000);
	
	a.getEmploydata();
	
	return 0;
}
