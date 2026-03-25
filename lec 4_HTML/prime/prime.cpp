#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int no = 2; no <= n; no++) {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(no); i++) {
            if (no % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << no << ' ';
        }
    }
    cout << endl;
    return 0;
}