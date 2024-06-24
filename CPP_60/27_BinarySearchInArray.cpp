#include <iostream>
#include<climits>
using namespace std;

int Binary_search(int array[], int  n, int key){
    int start=0;
    int end=n;
    while(start<=end){  //0 to 5   10 20 3 40 50 
        int mid=((start+end)/2); 
        if(array[mid]==key){ 
            
            return mid;
        }
        else if(array[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
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
    
    cout<<Binary_search(array, n,key)<<endl;
    return 0;
}
