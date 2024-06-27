// To create a dynamic array using pointers
#include <iostream>
using namespace std;

int main()
{
    // your code here
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    // int arr[size];
    // cout<<"Enter the elements of the array: ";
    // for(int i=0; i<size; i++){
    //     cin>>arr[i];
    // }
    int *arr = new int[size];
    
    for(int i=0; i<size; i++){
        cout<<"Enter the element "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"The elements of the array are: ";
    for(int i=0; i<size; i++){
        cout<<*(arr+i)<<" ";
    }

    delete[] arr; // Deallocate the dynamically allocated array
    arr = NULL; // Make the pointer NULL
    return 0;
}