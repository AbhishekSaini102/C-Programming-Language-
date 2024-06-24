#include<iostream>
#include<cmath>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n) {
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

// Function to convert decimal to binary
string decimalToBinary(int n) {
    string binary = "";
    int i = 0;
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    return binary;
}

int main() {
    int binary_num;
    cout << "Enter a binary number: ";
    cin >> binary_num;
    cout << "Decimal of " << binary_num << " is " << binaryToDecimal(binary_num) << endl;

    int decimal_num;
    cout << "Enter a decimal number: ";
    cin >> decimal_num;
    cout << "Binary of " << decimal_num << " is " << decimalToBinary(decimal_num) << endl;

    return 0;
}
