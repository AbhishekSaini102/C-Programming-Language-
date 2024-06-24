#include <iostream>
#include <vector>
using namespace std;

vector<int> PlusOne(vector<int> &digits)
{
    int conInt = 0;
    for (int i = 0; i < digits.size(); i++)
    {
        conInt = conInt * 10 + digits[i];
    }

    int newArr = conInt + 1;
    vector<int> result;
    while (newArr > 0)
    {
        result.insert(result.begin(), newArr % 10);
        newArr = newArr / 10;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = PlusOne(arr);
    cout << "The result is: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


//code with better space complexity
#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    cout << "Original digits: ";
    for (int i = 0; i < n; i++)
    {
        cout << digits[i] << " ";
    }
    cout << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
            cout << "Carry occurred at index " << i << endl;
            // return digits;
        }
        else
        {
            digits[i]++;
            cout << "Incremented digit at index " << i << endl;
            cout << digits[i] << endl;
            return digits;
        }
    }

    digits.insert(digits.begin(), 1);
    cout << "Added 1 at the beginning" << endl;
    return digits;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = plusOne(arr);

    cout << "The result is: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
