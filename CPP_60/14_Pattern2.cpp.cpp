#include<iostream>
using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;
    // cin>>n;
    
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(j<=n+1-i){   //1<=5-1
    //             cout<<j<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
     for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            int sum =i+j;
            if(sum%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}