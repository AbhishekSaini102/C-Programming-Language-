// #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin >> n;
    
//     bool foundOne = false;
    
//     for(int i = 31; i >= 0; i--) {
//         if ((n >> i) & 1) {
//             foundOne = true;
//         }
//         if (foundOne) {
//             cout << ((n >> i) & 1);
//         }
//     }
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cout << "Enter a decimal number: ";
//     cin >> n;
    
//     // Array to store binary number
//     int binaryNum[32];
 
//     // counter for binary array
//     int i = 0;
//     while (n > 0) {
 
//         // storing remainder in binary array
//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
 
//     cout << "Binary representation of the number is: ";
//     // printing binary array in reverse order
//     for (int j = i - 1; j >= 0; j--)
//         cout << binaryNum[j];
 
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
    
    
//     int n;
//     cin>>n;
    
//     int binaryNumber[32] = {0};
    
//     int i=0;
//     while(n>0){
//         binaryNumber[i]=n%2; //45%2 
//         n=n/2;
//         i++;
        
//     }
    
//     if(binaryNumber[i] == 0) {
//         i--;
//     }
    
    
    
//     for(int j=i-1; j>=0; j--){
//         cout<<binaryNumber[j];
//     }
    
   

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    
    int n,sum=0;
    cout<<"How many input you want : ";
    cin>>n;
    int binaryNumber[32]; 
    for(int i=0; i<n; i++){
        cin>>binaryNumber[i];
    }

    // Reverse the array
    int start = 0;
    int end = n-1;
    while(start < end) {
        // Swap elements at start and end
        int temp = binaryNumber[start]; 
        binaryNumber[start] = binaryNumber[end];
        binaryNumber[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
    
    for(int j=0; j<=n-1; j++){  
        int power = 1;
        for(int k=0; k<j; k++){ 
            // cout<<" "<<power<<endl;
            power *= 2; 
        }
        cout<<endl;
        cout<<power<<endl;
        binaryNumber[j]=binaryNumber[j]*power; 
        sum+=binaryNumber[j];
    }
    
    cout<<"decimal Number : "<<sum;
    // Print the reversed array
    // for(int i=0; i<n; i++){
    //     cout<<binaryNumber[i]<<" ";
    // }
    
    return 0;
}

