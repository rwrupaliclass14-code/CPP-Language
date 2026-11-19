//find minimum in to 4 number by using nested if else //

#include<iostream>
using namespace std;

int main(){
	
	int a = 50, b = 40, c = 30, d = 200;
	
	if (a < b ){
		if(a < c ){
			if(a < d ){
				cout<<" a is min";
			}
			else {
				cout<<"d is min";
			}
		}
		else{
			if(c < d){
				cout << " c is min";
			}
			else {
				cout <<" d id min";
			}
		}
	}
 else { // Matlab 'b' chhota hai 'a' se (a race se bahar)
        if (b < c) {
            if (b < d) {
                cout << "b is min";
            } else {
                cout << "d is min";
            }
        } else { // Matlab 'c' chhota hai 'b' se (b race se bahar)
            if (c < d) { // Ab sirf 'c' aur 'd' ka muqabla hai!
                cout << "c is min";
            } else {
                cout << "d is min";
            }
        }
    }
	
	return 0;
}


