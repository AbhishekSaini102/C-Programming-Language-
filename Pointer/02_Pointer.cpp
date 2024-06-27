#include <iostream>
using namespace std;

void printNumber(int *number_pointer)
{
    cout << "number pointer : " << *number_pointer << endl;
}

void printfloatingNumber(float *number_pointer)
{
    cout << "float pointer : " << *number_pointer << endl;
}

void printLetter(char *number_pointer)
{
    cout << "character pointer : " << *number_pointer << endl;
}

void print(void*ptr, char type)
{
    switch (type)
    {
    case 'i':
        // cout << "number pointer : " << *reinterpret_cast<int *>(ptr) << endl;
        // cout << "number pointer : " << *static_cast<int *>(ptr) << endl;
        cout<<"number pointer : "<<*((int*)ptr)<<endl;
        break;
    case 'f':
        cout << "float pointer : " << *reinterpret_cast<float *>(ptr) << endl;
        break;
    case 'c':
        cout << "character pointer : " << *reinterpret_cast<char *>(ptr) << endl;
        break;
    default:
        cout << "Invalid type" << endl;
        break;
    }
}
int main()
{
    // your code here
    int num = 15;
    // printNumber(&num); // printNumber(&num) is equivalent to printNumber(&5)

    print(&num, 'i');

    // float f = 3.14;
    // try
    // {
    //     printfloatingNumber((&f));
    //     // printNumber(*reinterpret_cast<int *>(&f));

    //     // int intfromfloat = *reinterpret_cast<int *>(&f); // Attempting to cast float* to int* to pass to printNumber
    //     // // cout <<"float pointer : " << intfromfloat << endl;


    //     // int intFromFloat = 1078523331;
    //     // float f = *reinterpret_cast<float *>(&intFromFloat);
    //     // cout << "Float value: " << f << endl;
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception caught: " << e.what() << '\n';
    // }

    // print(&num, 'i');
    float f = 3.14;
    print(&f, 'f');
    char letter = 'A';
    printLetter(&letter); // printNumber(&letter) is equivalent to printNumber(&'A')

    return 0;
}