#include <iostream>
#include<climits>
using namespace std;

int linear_search(int array[], int  n, int key){
    for(int i=0; i<n; i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int n;
    cin>>n;
    
    int array[n];
    
    for(int i=0; i<n; i++){
        
        cin>>array[i];
    }
    
    int key;
    cin>>key;
    
    cout<<linear_search(array, n,key)<<endl;
    return 0;
}



// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << "value of n" << n << endl;
//         cout << "At index " << i << ", the array element is " << arr[i] << endl;
//         if (arr[i] >= key)
//         {
//             cout << "Found a value greater than or equal to the key. Returning index: " << i << endl;
//             return i;
//         }
//     }
//     cout << "Did not find any value greater than or equal to the key. Returning array size: " << n << endl;
//     return n;
// }

// int main()
// {
//     int n = 4;                 // Size of the array
//     int arr[n] = {1, 3, 5, 6}; // The array elements

//     int key = 2; // The key to search for

//     cout << "Array size: " << n << ", Key: " << key << endl;
//     int ans = linearSearch(arr, n, key);
//     cout << "Final result: " << ans << endl;

//     return 0;
// }
