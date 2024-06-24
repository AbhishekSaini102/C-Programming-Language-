#include<iostream>
#include<string>
using namespace std;


int main(){

    // int pm=2100;
    // // cin>>pm;

    // for (int i = 0; i <=31; i++)
    // {
    //     if(i%2==0){
    //         continue;
    //     }
    //     if(pm==0){
    //         break;
    //     }
    //     cout<<"Go out Today"<<endl;
    //     pm=pm-300;
    // }
    

    // for(int num=1; num<=100; num++){

    //     if(num%3==0){
    //         continue;
    //     }
    //     cout<<num<<endl;
    // }

    // int n;
    // cin>>n;//8
    // int i;
    // for( i=2; i<n; i++){
    //     if(n%i==0){//8%2
    //         cout<<"Not Prime";
    //         break;
    //     }

    // }
    // if(i==n){
    //     cout<<"prime";
    // }


    int a,b;
    cin>>a>>b;
    for(int num=a; num<=b; num++){ //1 to 10
        int num2;
        for(num2=2; num2<num; num2++){ //2 
            if(num%num2==0){ //1 
                // cout<<"not prime"<<endl;
                break;
            }

        }
        if(num2==num){
            cout<<num<<endl;
        }

    }
    return 0;
}
