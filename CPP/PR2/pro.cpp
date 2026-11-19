#include<iostream>
using namespace std;

class trainDetails{
	
	public:
	int trainNumber, trainTime;
	string trainName, destination;
	char source;
	
	trainDetails(	int trainNumber, int trainTime, string trainName, string destination,
	char source) {
		 this-> trainNumber = trainNumber;
		 this-> trainTime = trainTime;
		 this-> trainName = trainName;
		 this->destination = destination;
         this-> source = source;
	}
	
		trainDetails(){
			
			cout<<"Enter train details"<<endl;
			
			cout<<"Enter train number"<<endl;
			cin>> this-> trainNumber;
			cout<<"Enter train time"<<endl;
			cin>> this-> trainTime;
			cout<<"Enter train trainName"<<endl;
			cin>> this-> trainName;
			cout<<"Enter train destination"<<endl;
			cin>> this-> destination;
			cout<<"Enter train source"<<endl;
			cin>> this-> source;
			
		}
		
		void gettrainDetails(){
			
				cout<<endl
				<<"-------- train details-------------"<<endl;
						
			cout<<"Enter train number" << this-> trainNumber<<endl;
			cout<<"Enter train time"<<this-> trainTime<<endl;
			cout<<"Enter train trainName"<<this-> trainName<<endl;
			cout<<"Enter train destination"<<this-> destination<<endl;
			cout<<"Enter train source"<<this-> source<<endl<<endl;
					
		}
};

int main(){
	
	trainDetails  s1(567898, 12, "mumbai express", "mumbai to surat", 'AB');
	
	s1.gettrainDetails();
	
	return 0;
};
