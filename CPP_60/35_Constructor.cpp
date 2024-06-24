// #include <iostream>
// using namespace std;

// class MyClass
// {
// public:
//     int x;

//     // Default constructor
//     MyClass() : x(0)
//     {
//         cout << "Default constructor called!" << endl;
//     }

//     // Parameterized constructor
//     MyClass(int val) : x(val)
//     {
//         cout << "Parameterized constructor called, value: " << x << endl;
//     }

//     // Copy constructor
//     MyClass(const MyClass &obj) : x(obj.x)
//     {
//         cout << "Copy constructor called, value: " << x << endl;
//     }

//     // Move constructor
//     MyClass(MyClass &&obj) : x(obj.x)
//     {
//         obj.x = 0;
//         cout << "Move constructor called, value: " << x << endl;
//     }
// };

// int main()
// {
//     // Default constructor
//     MyClass obj1;
//     obj1.x = 10;

//     // Parameterized constructor
//     MyClass obj2(20);

//     // Copy constructor
//     MyClass obj3 = obj2;

//     // Move constructor
//     MyClass obj4 = std::move(obj1);

//     return 0;
// }

// In this program, we have defined a class MyClass with a default constructor, a parameterized constructor, a copy constructor, and a move constructor.
#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;

    // Default constructor
    MyClass()
    {
        x = 0;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized constructor
    MyClass(int val)
    {
        x = val;
        cout << "Parameterized constructor called, value: " << x << endl;
    }

    // Copy constructor
    MyClass(const MyClass &obj)
    {
        x = obj.x;
        cout << "Copy constructor called, value: " << x << endl;
    }

    // Move constructor
    MyClass(MyClass &&obj)
    {
        x = obj.x;
        obj.x = 0;
        cout << "Move constructor called, value: " << x << endl;
    }
};

int main()
{
    // Default constructor
    MyClass obj1;
    obj1.x = 10;

    // Parameterized constructor
    MyClass obj2(20);

    // Copy constructor
    MyClass obj3 = obj2;

    // Move constructor
    MyClass obj4 = std::move(obj1);

    return 0;
}
