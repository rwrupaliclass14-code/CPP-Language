#include <iostream>
using namespace std;

int main() {
    // Do arrays hain
    int a[2] = {1, 2};
    int b[3] = {3, 4, 5};
    
    int n1 = 2; // Pehle array ka size
    int n2 = 3; // Doosre array ka size
    
    // Teesra array banaya jiska size dono ka sum hai (2 + 3 = 5)
    int c[5]; 
    int k = 0; // Teesre array ke index ke liye
    
    // 1. Pehle array ke elements copy karo
    for(int i = 0; i < n1; i++) {
        c[k] = a[i];
        k++;
    }
    
    // 2. Doosre array ke elements copy karo
    for(int i = 0; i < n2; i++) {
        c[k] = b[i];
        k++;
    }
    
    // 3. Merged array ko print karo
    cout << "Merged Array: ";
    for(int i = 0; i < n1 + n2; i++) {
        cout << c[i] << " ";
    }
    
    return 0;
}
