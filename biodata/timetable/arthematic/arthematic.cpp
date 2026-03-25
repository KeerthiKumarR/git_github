// #include <iostream>
// using namespace std;
// int main() {
//     int a=5;
//     int b=10;
//     int x;
//     cin>>x;
//     int y;
//     cin>>y;

//     cout << (x/y) << endl;//new line
//     cout << (x%y) << "\t";// wide space 
//     cout << (a+b) << endl;
//     cout << sizeof(a) << endl;//gives size of variable
//     return 0;
// }
//relational operators: <,>,<=,>=,==,!= used to compare two values
//logical operators: &&,||,! used to combine conditional statements
//bitwise operators: &,|,^,~,<<,>> used to manipulate data at bit level
//assignment operators: =,+=,-=,*=,/=,%= used to assign values to variables( operands on right are assigned to left operand)
//increment and decrement operators: ++,-- used to increase or decrease value by 1
//conditional operator: ? : used to evaluate a condition and return a value based on the result
//comma operator: , used to separate multiple expressions
//sizeof operator: sizeof() used to determine the size of a data type or variable
//ternary operator: ? : used to evaluate a condition and return one of two values based on the result
//type cast operator: (type) used to convert a value from one data type to another


// #include <iostream>
// using namespace std;
// int main() {
//     int a=7;
//     int b=3;
//     int c=4;
//     int d=8;
//     cout<< ++d + ++b + ++a + c++<< endl; // 8 + 4 + 9 + 4 = 25
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int a=7;
//     cout<< a-- + a++ << endl; // 7 + 6 = 13
//     cout<< ++a + --a << endl; // 8 + 7 = 15
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int mid = N / 2;
    
    for (int i = 0; i < N; i++) {
        int stars;
        if (i <= mid) {
           
            stars = 2 * i + 1;
        } else {
          
            stars = 2 * (N - i) - 1;
        }
    
        int spaces = (N - stars) / 2;
        
        for (int j = 0; j < spaces; j++) {
            cout << "\t";
        }
        
        for (int j = 0; j < stars; j++) {
            cout << "*";
            if (j < stars - 1) {
                cout << "\t";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}

