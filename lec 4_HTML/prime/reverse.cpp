#include <iostream>
using namespace std;
int main() {
    int N;
    int rev=0;
    int digit=0;
    cin>>N;
    while(N!=0){
        digit=N%10;
        rev=rev * 10 +digit;
        N=N/10;
    }
    cout<<rev<<endl;
}