#include<iostream>
#include<vector>
using namespace std;

int SearchInShortedRotatedArray(vector<int> & arr, int n, int target){
	
	int start = 0;
	int end = arr.size()-1;

	while(start<=end){
		
		int mid = start + ((end-start)/2);
		
		if(arr[mid] == target){

			return mid;
		}

		//left side checking in shorted Rotated Array

		if(arr[mid] >= arr[start]){
			if(arr[start]<=target && target<arr[mid]){
				
				end = mid - 1;
			}
			else{
				start = mid + 1;
			}
		} 
		//Right side checking in shorted Rotated Array
		else{
			if(arr[mid]< target && target>=arr[end]){
		
				start = mid + 1;
			}
			else{
				end = mid - 1;
			}
		}
		

	}
	return -1;
}

int main(){

	int n;
	cin>>n;

	vector<int> arr(n);

	for(int i=0; i<n; i++){

		cin>>arr[i];

	}
	int target;
	cin>>target;

	cout<<SearchInShortedRotatedArray(arr, n, target)<<endl;
	return 0;
}
