// wap to convert seconds into hh:mm:ss using class and object.//

#include <iostream>
#include <iomanip>
using namespace std;

class TimeConverter {
private:
    long totalSeconds;

public:
    void getInput() {
        cout << "Enter time in seconds: ";
        cin >> totalSeconds;
    }

    void display() {
        int hh = totalSeconds / 3600;
        int mm = (totalSeconds % 3600) / 60;
        int ss = totalSeconds % 60;

        cout << totalSeconds << " seconds = ";
        cout << setfill('0') << setw(2) << hh << ":"
             << setw(2) << mm << ":"
             << setw(2) << ss << endl;
    }
};

int main() {
    TimeConverter t;    // object
    t.getInput();
    t.display();
    return 0;
}
