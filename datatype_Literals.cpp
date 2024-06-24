// #include <iostream>
// #include <string>

// int main() {
//     // Integer Literals
//     int decimal = 42;
//     int octal = 052;
//     int hexadecimal = 0x2A;
//     int binary = 0b101010;
//     long int longInteger = 42L;
//     unsigned int unsignedInt = 42U;
//     long long int longLongInteger = 42LL;

//     // Floating-Point Literals
//     double floatLiteral = 3.14;

//     // Character Literals
//     char letter = 'a';

//     // String Literals
//     std::string greeting = "Hello, world!";

//     // Boolean Literals
//     bool myNameIsAlex = true;

//     // Print all the variables
//     std::cout << "Integer Literals: " << decimal << ", " << octal << ", " << hexadecimal << ", " << binary << ", " << longInteger << ", " << unsignedInt << ", " << longLongInteger << std::endl;
//     std::cout << "Floating-Point Literal: " << floatLiteral << std::endl;
//     std::cout << "Character Literal: " << letter << std::endl;
//     std::cout << "String Literal: " << greeting << std::endl;
//     std::cout << "Boolean Literal: " << std::boolalpha << myNameIsAlex << std::endl;

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main() {
    // Integer Literals
    int decimal = 42;
    int octal = 052;
    int hexadecimal = 0x2A;
    int binary = 0b101010;
    long int longInteger = 42L;
    unsigned int unsignedInt = 42U;
    long long int longLongInteger = 42LL;

    // Floating-Point Literals
    double floatLiteral = 3.14;

    // Character Literals
    char letter = 'a';

    // String Literals
    string greeting = "Hello, world!";

    // Boolean Literals
    bool myNameIsAlex = true;

    // Print all the variables
    cout << "Integer Literals: " << decimal << ", " << octal << ", " << hexadecimal << ", " << binary << ", " << longInteger << ", " << unsignedInt << ", " << longLongInteger << endl;
    cout << "Floating-Point Literal: " << floatLiteral << endl;
    cout << "Character Literal: " << letter << endl;
    cout << "String Literal: " << greeting << endl;
    cout << "Boolean Literal: " << boolalpha << myNameIsAlex << endl;

    return 0;
}
