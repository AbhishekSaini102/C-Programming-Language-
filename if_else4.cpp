/*
Problem: Write a program that takes five integers as input: a, b, c, d, and e. The program should determine the relationship between a, b, c, d, and e using only if-else statements.

The program should output:
- "All are equal" if all five numbers are equal.
- "All are different" if all five numbers are different.
- "Some are equal" if some of the numbers are equal but not all.
- "Neither all are equal nor different" if neither of the above conditions is true.

Note: You are not allowed to use any loops or arrays. Only if-else statements are allowed.
*/

#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Enter five integers: ";
    cin >> a >> b >> c >> d >> e;

    if(a==b && b==c && c==d && d==e){

        cout<<"All are equal"<<endl;
    }
    else if(a!=b && b!=c && c!=d && d!=e && e!=a){

        cout<<"All five are different"<<endl;
    }
    else if(a==b || a==c || a==d || a==e || b==c || b==d || b==e ||c==d || c==e || d==e ){

        cout<<"some are equals but not all"<<endl;
    }
    else{

        cout<<"Neither all are equal nor different"<<endl;
    }

    return 0;


}

// Another Solution of this problem

// #include<iostream>
// using namespace std;

// int main() {
//     int a, b, c, d, e;
//     cout << "Enter five integers: ";
//     cin >> a >> b >> c >> d >> e;

//     if (a == b && b == c && c == d && d == e) {
//         cout << "All are equal" << endl;
//     } else if (a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e) {
//         cout << "All are different" << endl;
//     } else {
//         cout << "Some are equal" << endl;
//     }

//     return 0;
// }
