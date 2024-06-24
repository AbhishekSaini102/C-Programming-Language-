#include <iostream>
#include <string>
#include <typeinfo>  // Include this to use typeid
using namespace std;

string getTypeName(const string& type) {
    if (type == "i") return "int";
    else if (type == "d") return "double";
    else if (type == "f") return "float";
    else if (type == "c") return "char";
    else if (type == "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE") return "string";
    // Add more types if needed...
    else return "unknown";
}

int main() {
    string str = "2009, abhishek";
    int num = 10;
    try {
        num = stoi(str);
        cout << str << ": " << num << endl;
    } catch (invalid_argument& e) {
        cout << "Invalid argument: " << e.what() << endl;
    } catch (out_of_range& e) {
        cout << "Out of range: " << e.what() << endl;
    }
    cout << "Type of str is: " << getTypeName(typeid(str).name()) << endl;  // Check the type of str
    cout << "Type of num is: " << getTypeName(typeid(num).name()) << endl;  // Check the type of num
    return 0;
}
