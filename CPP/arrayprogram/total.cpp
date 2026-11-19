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
 
    cout << "The some is: " << sum << endl; 

    return 0;
}

