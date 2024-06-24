// #include <iostream>
// #include<climits>
// using namespace std;

// void selection_sort(int array[], int n){
    
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(array[j]<array[i]){   //3 5 4 2 1
//                 int temp = array[j];    //temp=2
//                 array[j] = array[i];     //array[j]=3
//                 array[i]=temp;          //array[i]=2
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
        
//         cout<<array[i]<<" ";

//     }
// }

// int main(){
    
//     int n;
//     cin>>n;
    
//     int array[n];
    
//     for(int i=0; i<n; i++){
        
//         cin>>array[i];
//     }

    
//     selection_sort(array, n);

//     return 0;
// }



#include <iostream>
#include<climits>
using namespace std;

int selection_sort(int array[], int n){
    
    int numSwaps = 0;
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(array[j]<array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i]=temp;
                numSwaps++;
            }
        }
    }
    for(int i=0; i<n; i++){
        
        cout<<array[i]<<" ";

    }
    
    return numSwaps;
}

int main(){
    
    int n;
    cin>>n;
    
    int array[n];
    
    for(int i=0; i<n; i++){
        
        cin>>array[i];
    }

    
    int swaps = selection_sort(array, n);
    cout << "\nNumber of swaps made: " << swaps << endl;

    return 0;
}


// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }

// int main() {
//     int arr[] = {3, 5, 4, 2, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     selectionSort(arr, n);

//     cout << "Sorted array: \n";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j; 
//             }
//         }
//         // Swap without using the swap function
//         int temp = arr[minIndex];
//         arr[minIndex] = arr[i];
//         arr[i] = temp;
//     }
// }

// int main() {
//     int arr[] = {3, 5, 4, 2, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     selectionSort(arr, n);

//     cout << "Sorted array: \n";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }
