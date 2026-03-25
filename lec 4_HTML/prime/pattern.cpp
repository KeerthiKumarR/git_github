// #include <iostream>
// #include  <cmath>
// using namespace std;
// int main() {
// 	int a,b,c;
// 	cin>>a>>b>>c;
// 	int discrimant= b * b - 4 * a * c;
// 	if (discrimant > 0){
// 		cout<<"Real and Distinct"<<endl;
// 		double root1 = (-b + sqrt(discrimant))/(2.0*a);
// 		double root2 = (-b -sqrt(discrimant))/(2.0*a);
// 		int Root1 = (int)root1;
// 		int Root2 = (int)root2;
// 		if (Root1 > Root2){
// 			swap(Root1,Root2);
// 		}
// 		cout << Root1 <<"  " << Root2 << endl;
// 	}
// 	else if( discrimant == 0){
// 		cout << "real and equal" << endl;
// 		double root = (-b)/(2.0*a);
// 		int Root = (int)root;
// 		cout<< Root << " " << Root << endl;
// 	}
// 	else{
// 		cout<<"Imaginary"<<endl;
// 	}
// 	return 0;
// }
// int n;
// cin >> n;   // user enters 5

// // --- Top row ---
// for (int i = 0; i < n-1; i++) {
//     cout << " ";
// }
// for (int i = 0; i < n; i++) {
//     cout << "*";
// }
// cout << endl;

// // --- Middle rows ---
// for (int i = 1; i < n-1; i++) {
//     for (int j = 0; j < n-1-i; j++) {
//         cout << " ";
//     }
//     cout << "*";
//     for (int j = 1; j < n-1; j++) {
//         cout << " ";
//     }
//     cout << "*";
//     cout << endl;
// }

// // --- Bottom row ---
// for (int i = 1; i < n+1; i++) {
//     cout << "*";
// }
// cout << endl;
//
// cin >> n;   // user enters 5

// // --- Top row ---
// for (int i = 0; i < n-1; i++) {
//     cout << " ";
// }
// for (int i = 0; i < n; i++) {
//     cout << "*";
// }
// cout << endl;

// // --- Middle rows ---
// for (int i = 1; i < n-1; i++) {
//     for (int j = 0; j < n-1-i; j++) {
//         cout << " ";
//     }
//     cout << "*";
//     for (int j = 1; j < n-1; j++) {
//         cout << " ";
//     }
//     cout << "*";
//     cout << endl;
// }

// // --- Bottom row ---
// for (int i = 1; i < n+1; i++) {
//     cout << "*";
// }
// cout << endl;
#include <iostream>
using namespace std;
int n;
cin >> n;   // user enters 5

// --- Top row ---
for (int i = 0; i < n-1; i++) {
    cout << " ";
}
for (int i = 0; i < n; i++) {
    cout << "*";
}
cout << endl;

// --- Middle rows ---
for (int i = 1; i < n-1; i++) {
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

// --- Bottom row ---
for (int i = 1; i < n+1; i++) {
    cout << "*";
}
cout << endl;
