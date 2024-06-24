#include <iostream>
using namespace std;

void Optimized_Bubble_Sort(int array[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then the array is sorted
        if (swapped == false)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void Bubble_Sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // 0 to 4
        for (int j = 0; j < n - i - 1; j++)
        { // 0 to 4
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int Bubble_Sort2(int array[], int n)
{

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Bubble_Sort(array, n);
    Bubble_Sort2(array, n);

    return 0;
}