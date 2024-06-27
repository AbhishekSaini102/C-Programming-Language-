#include <iostream>
using namespace std;

int getMin(int arr[], int size)
{

    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int size)
{

    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void getMinAndMax(int arr[], int size, int *min, int *max)
{
    // *min = arr[0];
    // *max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}
int main()
{
    // your code here

    int arr[5] = {5, -2, 29, 4, 6};
    // cout << "The minimum value of the array is : " << getMin(arr, 5) << endl;
    // cout << "The maximum value of the array is : " << getMax(arr, 5) << endl;

    int min = arr[0];
    int max = arr[0];
    getMinAndMax(arr, 5, &min, &max);
    cout << "The minimum value of the array is : " << min << endl;
    cout << "The maximum value of the array is : " << max << endl;

    return 0;
}