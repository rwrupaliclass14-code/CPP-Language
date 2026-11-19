#include<iostream>
using namespace std;

class student
{
	public:
		string studentName;
		string courseName;
		int idNumber;
		double mobileNo;
		char grade;
					
		void setStudent(string sname, string cname, int id, double mo, char grd )
		{
			 studentName = sname;
		     courseName = cname;
	         idNumber = id; 
		     mobileNo = mo;
		     grade = grd;
		};
		
		void getStudent()
		{
			cout<< studentName<<endl;
        	cout<< courseName<<endl;
	    	cout<< idNumber<<endl;
		    cout<< mobileNo<<endl;
		    cout<< grade<<endl;
		    cout<<endl;
		};
		
};
int main(){
	
	student a, b; // set variable //
	
	a.setStudent("priya","full-stack devloper", 52467, 9846355727, 'A');
	b.setStudent("mohit","Ai- Ml", 7564, 9847545727, 'B');
		
	a.getStudent();
    b.getStudent();	
	
	return 0;
}
