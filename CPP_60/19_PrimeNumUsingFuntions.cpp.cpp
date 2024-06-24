// #include<iostream>
// using namespace std;

// bool isprime(int x){
//     for(int i=2; i<=x-1; i++){
//         if(x%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
    
//     int num;
//     cin>>num;
//     int result = isprime(num);
//     if(result==true){
//         cout<<num<<" return with "<<result<<" is a prime number"<<endl;
//     }
//     else{
//         cout<<num<<" return with "<<result<<" is a not prime number"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// bool isprime(int x){
//     for(int i=2; i<=(x-1); i++){
//         if(x%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// bool isPrimeBetter(int x){
//     for(int i=2; i*i<=x; i++){
//         if(x%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
    
//     int a, b, count=0;
//     cin>>a>>b;
  
//     for(int i=a; i<=b-1; i++){
//         if(isPrimeBetter(i)){
//             cout<<i<<" ";
//             count++;
            
//         }
//     }
//     cout<<endl<<count<<endl;
//     return 0;
// }


