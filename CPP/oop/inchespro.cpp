// wap to convert inches into feet using classa nd object//

#include <iostream>
using namespace std;

class InchToFeet {
private:
    double inches;

public:
    void getInput() {
        cout << "Enter length in inches: ";
        cin >> inches;
    }

    void display() {
        double feet = inches / 12.0;           // 1 foot = 12 inches
        int wholeFeet = (int)inches / 12;
        int remInches = (int)inches % 12;

        cout << inches << " inches = " << feet << " feet" << endl;
        cout << "That is " << wholeFeet << " feet " << remInches << " inches" << endl;
    }
};

int main() {
    InchToFeet obj;     // object
    obj.getInput();
    obj.display();
    return 0;
}
