#include<iostream>
#include<string>
#include<climits>
#include<cfloat>
using namespace std;

int main(){

    int x = 5; // 4 bytes
    double y = 5.5; // 8 bytes
    char z = 'H'; // 1 byte
    wchar_t i = L'x'; // 4 bytes
    
    long double ld = 5.5; // 16 bytes
    string s = "Hello"; // 24 bytes
    float f = 5.5; // 4 bytes
    enum color {red, green, blue}; // 4 bytes
    bool b = true; // 1 byte
    long l = 9223372036854775807L; // 8 bytes
    long long ll = 9223372036854775807LL; // 8 bytes
    long long int lli = 9223372036854775807LL; // 8 bytes
    short sh = 12345; // 2 bytes
    unsigned int ui = 1234567890; // 4 bytes
    unsigned long ul = 18446744073709551615UL; // 8 bytes
    unsigned long long ull = 18446744073709551615ULL; // 8 bytes

    wcout << "wchar_t: " <<sizeof(i) << i<< endl;

    cout << "Size of x: " << sizeof(x) << " Range: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "Size of y: " << sizeof(y) << " Range: " << DBL_MIN << " to " << DBL_MAX << endl;
    cout << "Size of z: " << sizeof(z) << " Range: " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "Size of s: " << sizeof(s) << endl;
    cout << "Size of f: " << sizeof(f) << " Range: " << FLT_MIN << " to " << FLT_MAX << endl;
    cout << "Size of enum color: " << sizeof(color) << " Range: 0 to " << INT_MAX << endl;
    cout << "Size of b: " << sizeof(b) << " Range: 0 to 1" << endl;
    cout << "Size of l: " << sizeof(l) << " Range: " << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "Size of ll: " << sizeof(ll) << " Range: " << LLONG_MIN << " to " << LLONG_MAX << endl;
    cout << "Size of sh: " << sizeof(sh) << " Range: " << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "Size of ui: " << sizeof(ui) << " Range: 0 to " << UINT_MAX << endl;
    cout << "Size of ul: " << sizeof(ul) << " Range: 0 to " << ULONG_MAX << endl;
    cout << "Size of ull: " << sizeof(ull) << " Range: 0 to " << ULLONG_MAX << endl;
    cout << "Size of lli: " << sizeof(lli) << " Range: " << LLONG_MIN << " to " << LLONG_MAX << endl;

    return 0;
}
// Output:
// Size of x: 4 Range: -2147483648 to 2147483647
// Size of y: 8 Range: 2.22507e-308 to 1.79769e+308
// Size of z: 1 Range: -128 to 127
// Size of s: 24
// Size of f: 4 Range: 1.17549e-038 to 3.40282e+038
// Size of enum color: 4 Range: 0 to 2147483647
// Size of b: 1 Range: 0 to 1
// Size of l: 4 Range: -2147483648 to 2147483647
// Size of ll: 8 Range: -9223372036854775808 to 9223372036854775807
// Size of sh: 2 Range: -32768 to 32767
// Size of ui: 4 Range: 0 to 4294967295
// Size of ul: 4 Range: 0 to 4294967295
// Size of ull: 8 Range: 0 to 18446744073709551615