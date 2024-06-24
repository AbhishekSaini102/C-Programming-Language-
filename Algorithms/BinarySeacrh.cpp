// #include <iostream>
// using namespace std;

// int BinarySearch(int arr[], int n, int key)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         // cout<<"mid:"<<mid<<endl;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;

//     cout << BinarySearch(arr, n, key);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    // Error checking for n
    if (n <= 0)
    {
        cout << "Array size should be positive.";
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to search for: ";
    cin >> key;
    // Error checking for key
    if (cin.fail())
    {
        cout << "Key should be an integer.";
        return 0;
    }
    int result = BinarySearch(arr, key);
    if (result != -1)
    {
        cout << "Element found at index " << result;
    }
    else
    {
        cout << "Element not found in the array.";
    }
    return 0;
}
