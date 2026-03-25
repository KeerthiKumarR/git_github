#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(10) << "Number" << setw(10) << "Square" << endl;
    cout << "-------------------------" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << left << setw(10) << i << setw(10) << i * i << endl;
    }
    return 0;
}