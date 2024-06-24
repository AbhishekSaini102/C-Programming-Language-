// #include <iostream>
// #include <string>

// enum Weekdays {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

// struct Student {
//     std::string name;
//     int age;
//     float gpa;
//     Weekdays day;
// };

// int main() {
//     int num = 10;
//     char letter = 'A';
//     bool isTrue = true;
//     float decimalNum = 3.14f;
//     double largeDecimalNum = 3.141592653589793238;
//     std::string name = "John Doe";
//     int numbers[] = {1, 2, 3, 4, 5};
//     int *ptr = &num;
//     Weekdays today = Mon;

//     Student john = {"John Doe", 20, 3.5, today};

//     std::cout << "Integer: " << num << std::endl;
//     std::cout << "Character: " << letter << std::endl;
//     std::cout << "Boolean: " << std::boolalpha << isTrue << std::endl;
//     std::cout << "Float: " << decimalNum << std::endl;
//     std::cout << "Double: " << largeDecimalNum << std::endl;
//     std::cout << "String: " << name << std::endl;
//     std::cout << "Array: ";
//     for(int i = 0; i < 5; i++) {
//         std::cout << numbers[i] << " ";
//     }
//     std::cout << std::endl;
//     std::cout << "Pointer: " << *ptr << std::endl;
//     std::cout << "Enum: " << today << std::endl;
//     std::cout << "Struct: " << john.name << ", " << john.age << ", " << john.gpa << ", " << john.day << std::endl;

//     return 0;
// }


#include <iostream>
#include <string>
#include <iomanip> // for std::setprecision


    enum Weekdays {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
    // enum Weekdays {Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7}; // you can also declare the values of the enum constants


    struct student{
        std::string name;
        int age;
        float gpa;
        Weekdays day;
    };

int main(){
    
    int number=10;
    char letter= 'a';
    float desimalNum = 2.32f;
    bool isTrue = true;
    double largeNum =2.24584787888888989899;
    long int LongNum = 1234567890L;
    unsigned int unsignedNum = 1234567890U;
    long long int longLongNum = 1234567890LL;
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = &number;
    Weekdays today = Wed;
    student Abhi = {"Abhishek", 20, 3.5, today};

    std::cout << "Integer: " << number << std::endl;
    std::cout << "Character: " << letter << std::endl;
    std::cout << "Boolean: " << std::boolalpha << isTrue << std::endl;
    std::cout << "Float: " << desimalNum << std::endl;
    std::cout << "Double: "  << std::setprecision(15) << largeNum << std::endl;
    std::cout << "Long Integer: " << LongNum << std::endl;
    std::cout << "Unsigned Integer: " << unsignedNum << std::endl;
    std::cout << "Long Long Integer: " << longLongNum << std::endl;
    std::cout << "Array: ";
    for(int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;
    std::cout << "Enum: " << today << std::endl;
    std::cout << "Struct: " << Abhi.name << ", " << Abhi.age << ", " << Abhi.gpa << ", " << Abhi.day << std::endl;


    return 0;
}