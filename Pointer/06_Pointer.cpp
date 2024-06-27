//Function Pointer
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*function_Pointer)(int, int) = add;

    cout << function_Pointer(2, 3) << endl;
    cout << add(3, 4) << endl;
    cout << (*function_Pointer)(4, 5) << endl;

    return 0;
}
