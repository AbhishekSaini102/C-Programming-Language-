#include <iostream>
using namespace std;

int main()
{

    // int n = 5;
    // cout << &n << endl;

    // int* ptr = &n;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // *ptr = 10;
    // cout << *ptr << endl;
    // cout << n << endl;

    // int v;
    // int* ptr1 = &v;
    // *ptr1 = 6;
    // cout << v << endl;

    // int* ptr2 = new int(20);
    // cout << "ptr2: " << ptr2 << endl;
    // cout <<"ptr2: "<< *ptr2 << endl;
    //delete ptr2; // Freeing dynamically allocated memory
    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << "arr: " << *arr << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;
    // cout << arr[1]<<endl;
    // cout << (arr + 1) << endl;
    // cout << (arr + 2) << endl;
    // cout << (arr + 3) << endl;
    // cout << (arr + 4) << endl;

    int arr[5];
    for(int i=0; i<=4; i++){
        cout<<"Enter the value of arr["<<i<<"] : ";
        cin>>arr[i];

    }
    // for(int i=0; i<=4; i++){
    //     cout<<"The value of arr["<<i<<"] : "<<arr[i]<<endl;
    // }
    for(int i=0; i<=4; i++){
        cout<<"The value of arr["<<i<<"] : "<<*(arr+i)<<" "<<endl;
    }
    return 0;
}