#include <iostream>
using namespace std;

int main()
{
    // your code here
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    // int arr[rows][cols];
    // Normal 2D array
    // cout<<"Enter the elements of the array: ";
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // cout<<"The elements of the array are:\n ";
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element " << i << "," << j << ": ";
            cin >> arr[i][j];
        }
    }
    cout << "The elements of the array are:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }

    cout << "The address of the arr pointer is: " << (void *)&arr << endl;

    //  Print the addresses of the row pointers
    cout << "The addresses of the row pointers are:\n";
    for (int i = 0; i < rows; i++)
    {
        cout << "&arr[" << i << "]: " << (void *)&arr[i] << endl;
    }

    // Print the addresses of the elements
    cout << "The addresses of the elements are:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "&arr[" << i << "][" << j << "]: " << &arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr; // Deallocate the dynamically allocated array
    arr = NULL;   // Make the pointer NULL

    return 0;
}