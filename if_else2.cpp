/*
Problem: Write a program that takes three integers as input: a, b, and c. The program should determine the relationship between a, b, and c using only if-else statements.

The program should output:
- "All are equal" if all three numbers are equal.
- "All are different" if all three numbers are different.
- "Neither all are equal nor different" if neither of the above conditions is true.
*/

#include<iostream>
using namespace std;

int main(){

    int x, y, z;
    cin >> x >> y >> z;

    if(x==y && y==z){

        cout << "ALL are equal";
    }
    else if(x!=y && y!=z && x!=z){

        cout << "ALL are different";
    }
    else{
           
        cout << "Neither all are equal nor different";
        
    }

    return 0;
}