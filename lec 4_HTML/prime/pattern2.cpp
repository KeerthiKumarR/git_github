#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++) {
        cout << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i < n-1; i++){
        for (int j = 0; j < n-1-i; j++) {
            cout << " ";

        }
        cout << "*";
        for (int j = 1; j < n-1; j++) {
            cout << " ";
        }
        cout << "*";     
        cout << endl;
	}
    for (int i = 0; i <n; i++) {
        cout << "*";
	}
    cout << endl;
    
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
    
//     long long a = 0, b = 1, c;
//     int count = 0;
    
//     for (int row = 1; row <= N; row++) {
//         for (int col = 0; col < row; col++) {
//             if (count == 0) {
//                 cout << a;
//                 count++;
//             } else if (count == 1) {
//                 cout << b;
//                 count++;
//             } else {
//                 c = a + b;
//                 cout << c;
//                 a = b;
//                 b = c;
//                 count++;
//             }
            
//             if (col < row - 1) {
//                 cout << "\t";
//             }
//         }
//         cout << endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int a=0;
//     int b=1;
//     int c;
//     int n;
//     int i=3;
//     cin>>n;
//     cout<<a<<"\t"<<b<<"\t";
//     while(i<=n) {
//         c=a+b;
//         cout<<c<<"\t";
//         a=b;
//         b=c;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int a = 0;
//     int b = 1;
//     int c;
//     int count = 0;
//     for (int i= 1; i<= N; i++) {
//         for (int j = 1; j <= i; j++) {
//             if (count == 0) {
//                 cout << a; 
//             } else if (count == 1) {
//                 cout << b; 
//             } else {
//                  c = a + b;
//                 a = b;
//                 b = c;
//                 cout << b;
//             }
//             count++;
//             if (j < i) cout << "\t";
//         }
//         cout << endl; 
//     }

//     return 0;
//}


// // #include<iostream>
// // using namespace std;
// // int main() {
// // 	int i,j,n;
// // 	cin>>n;

// // 	for (i=0;i<n;i++){
// // 		for (j=0;j<n/2-i;j++){
// // 			cout<<" "<<"	";
// // 		}
// // 		for(j=0;j<2*i+1 and i<=n/2;j++){
// // 			cout<<"*"<<"	";
// // 		}
// 		for(j=0;j<i-(n/2) and i>n/2;j++){
// 			cout<<" "<<"	";
// 		}
// 		for (j=0;j<n-2*(i-n/2) and i>n/2;j++){
// 			cout<<"*"<<"	";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
// while(n!=0){
// digit=n%10;
// rev=rev * 10 +digit;
// n=n/10;