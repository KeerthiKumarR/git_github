#include <iostream>
using namespace std;
int main(){
    int n;
    int row,col;
    cin>>n;
    for(row=1;row<=n;row=row+1){
        for(col=1;col<=row;col=col+1){
            cout<<'*';
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}