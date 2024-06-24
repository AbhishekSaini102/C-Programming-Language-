// #include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;
    
//     int  reverse=0;
//     while(n>0){
//         int lastdigit = n%10; //1234%10 =4  //123%10 =3
//         cout<<reverse<<endl;
//         reverse =reverse*10 + lastdigit; //4
//         cout<<reverse<<endl;
//         n =n/10; //1234/10 == 123
//     }
//     cout<<reverse<<endl;
    
//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int sum=0;
    int original_n=n;
    while(n>0){
        int lastdigit = n%10; //=153 = 3
        sum+=pow(lastdigit,3); //27+125+1
        n=n/10;
    }
    if(sum==original_n){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    
    return 0;
}