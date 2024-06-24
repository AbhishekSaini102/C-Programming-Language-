// #include<iostream>
// using namespace std;

// int main() {
//     // Static memory allocation
//     int staticArray[5] = {1, 2, 3, 4, 5};
//     cout << "Static array: ";
//     for(int i = 0; i < 5; i++) {
//         cout << staticArray[i] << " ";
//     }
//     cout << endl;

//     // Dynamic memory allocation
//     int* dynamicArray = new int[5];
//     for(int i = 0; i < 5; i++) {
//         dynamicArray[i] = i+1;
//     }
//     cout << "Dynamic array: ";
//     for(int i = 0; i < 5; i++) {
//         cout << dynamicArray[i] << " ";
//     }
//     cout << endl;

//     // Don't forget to deallocate dynamically allocated memory
//     delete [] dynamicArray;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     // Dynamic memory allocation
//     int* dynamicArray = new int[5];
//     for(int i = 0; i < 5; i++) {
//         dynamicArray[i] = i+1;
//     }

//     // Print the original array
//     cout << "Original array: ";
//     for(int i = 0; i < 5; i++) {
//         cout << dynamicArray[i] << " ";
//     }
//     cout << endl;

//     // Create a new array with a larger size
//     int newSize = 10;
//     int* newArray = new int[newSize];

//     // Copy the elements from the old array to the new one
//     for(int i = 0; i < 5; i++) {
//         newArray[i] = dynamicArray[i];
//     }

//     // Initialize the remaining elements
//     for(int i = 5; i < newSize; i++) {
//         newArray[i] = 0;
//     }

//     // Delete the old array
//     delete [] dynamicArray;

//     // Point the dynamicArray pointer to the new array
//     dynamicArray = newArray;

//     // Print the new array
//     cout << "New array: ";
//     for(int i = 0; i < newSize; i++) {
//         cout << dynamicArray[i] << " ";
//     }
//     cout << endl;

//     // Don't forget to deallocate the dynamically allocated memory
//     delete [] dynamicArray;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector
    vector<int> dynamicVector(5);
    for (int i = 0; i < 5; i++)
    {
        dynamicVector[i] = i + 1;
    }

    // Print the original vector
    cout << "Original vector: ";
    for (int i = 0; i < dynamicVector.size(); i++)
    {
        cout << dynamicVector[i] << " ";
    }
    cout << endl;

    // Resize the vector
    dynamicVector.resize(10);

    // Initialize the new elements
    for (int i = 5; i < 10; i++)
    {
        dynamicVector[i] = 0;
    }

    // Print the new vector
    cout << "New vector: ";
    for (int i = 0; i < dynamicVector.size(); i++)
    {
        cout << dynamicVector[i] << " ";
    }
    cout << endl;

    return 0;
}
