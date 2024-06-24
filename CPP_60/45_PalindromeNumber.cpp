#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int origional = num; // 121
    int reversed = 0;    // 0

    while (num > 0)
    {
        int digit = num % 10;             // 121%10 = 1
        reversed = reversed * 10 + digit; // 1
        num /= 10;
    }
    return origional == reversed;
}
int main()
{
    int x;
    cin >> x;

    if (isPalindrome(x))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}