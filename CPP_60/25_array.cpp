#include <iostream>
#include<climits>
using namespace std;

int main(){
    
    // int array[2];
    // array[0]=1;
    // array[1]=2;
    
    // int array[4] = {1,2,3,5}
    
    int n;
    cin>>n;
    
    int array[n];
    
    for(int i=0; i<n; i++){
        
        cin>>array[i];
    }
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
 
    for(int i=0; i<n; i++){
        
      if(array[i]>maxNo){ 
          maxNo=array[i];
        cout<<maxNo<<endl;
      }
      if(array[i]<minNo){
          minNo=array[i];
          cout<<"min"<<minNo<<endl;
      }
    
        // maxNo=max(maxNo, array[i]);
        // minNo=min(minNo, array[i]);
    }
   
   cout<<maxNo<<" "<<minNo<<" " <<endl;
    

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int arr[n + 1];

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Initialize max and min to the first element of the array
//     int max = arr[1];
//     int min = arr[1];

//     for (int i = 2; i <= n; i++)
//     { // Start the loop from the second element

//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }

//     cout << max << " " << min << endl;

//     return 0;
// }
