#include<iostream>
#include<typeinfo>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){


    auto x = 5;
    auto y = 5.5;
    auto z = "Hello";
    auto ptr = &x;
    auto pptr = &ptr;

    cout << x << " " << y << " " << z << endl;
    cout << "Size of x: " << sizeof(x) << endl;
    cout << "Size of y: " << sizeof(y) << endl;
    cout << "Size of z: " << sizeof(z) << endl;
    // cout << "Size of auto: " << sizeof(auto) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of string: " << sizeof(string) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    
    cout << "Size of ptr: " << sizeof(ptr) << endl;
    cout << "Size of pptr: " << sizeof(pptr) << endl;

    cout<< "Value of x: " << x << endl;
    cout<< "Value of y: " << y << endl;
    cout<< "Value of z: " << z << endl;

    cout <<"typeid of x" <<typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
    cout << typeid(ptr).name() << endl;
    cout << typeid(pptr).name() << endl;

    return 0;

}