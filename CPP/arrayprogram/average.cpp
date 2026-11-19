#include <iostream>
using namespace std;

int main() {
    int i, n, sum = 0;
    float average;

    cout << "Enter the size of the array: ";
    cin >> n;

        if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    int a[n]; 

    cout << "Enter the elements:" << endl;
    for(i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
    }

    for(i = 0; i < n; i++) {
        sum += a[i];
    }

    // Fixed: Cast 'sum' to float to keep the decimal points
    average = (float)sum / n; 

    // Fixed: Correct C++ syntax for printing the variable
    cout << "The average is: " << average << endl; 

    return 0;
}

