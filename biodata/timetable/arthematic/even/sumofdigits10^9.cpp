#include <iostream>
using namespace std;

int main() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long sum = 0;
    while (a > 0) {
        sum = sum + a % 10;
        a = a / 10;
    }
    cout << sum << endl;
    return 0;
}
