#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; // Number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> myVector; // Declare a vector of integers

    // Input loop
    for (int i = 0; i < n; ++i)
    {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        myVector.push_back(num); // Insert the element into the vector
    }

    // Display the elements
    cout << "Elements in the vector:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}
