// #include <iostream>
// using namespace std;

// void insertion_sort(int array[],int n){
//    for(int i=1; i<n; i++){
//        int current=array[i];  //6 
//         int j=i-1;            
//         while(array[j]>current && j>=0){   
//             array[j+1]=array[j];           
//             j--; 

//         }
//         array[j+1]=current;        
//    } 
//     for(int i=0; i<n; i++){
//         cout<<array[i]<<" ";
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;
    
//     int array[n];
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
    
//     insertion_sort(array, n);
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void insertion_sort(int array[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int current = array[i]; // 6
//         cout << "current: " << current << endl;
//         int j = i - 1;
//         cout << "first j:" << j << endl;
//         while (array[j] > current && j >= 0)
//         {
//             array[j + 1] = array[j];
//             j--;
//             cout << "j:" << j << "" << endl;
//         }
//         array[j + 1] = current;
//         cout << "swap:" << array[j + 1] << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     insertion_sort(array, n);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void insertion_sort(int array[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int current = array[i];
//         int j = i - 1;
//         while (array[j] > current && j >= 0)
//         {
//             array[j + 1] = array[j];
//             j--;
//         }
//         array[j + 1] = current;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
// }

// int main()
// {
//     int array[] = {5, 2, 4, 6, 1, 3}; // You can change this array to any numbers you want to sort
//     int n = sizeof(array) / sizeof(array[0]);

//     insertion_sort(array, n);

//     return 0;
// }

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        cout << "Step " << i << ":" << endl;
        cout << "Initial array: ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
        key = arr[i];
        cout << "Key: " << key << endl;
        j = i - 1;
        cout << "Initial j: " << j << endl;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            cout << "Shifted " << arr[j] << " to the right" << endl;
            j = j - 1;
            cout << "Updated j: " << j << endl;
        }
        arr[j + 1] = key;
        cout << "Placed key at index " << j + 1 << endl;
        cout << "Sorted array: ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl
             << endl;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    return 0;
}
