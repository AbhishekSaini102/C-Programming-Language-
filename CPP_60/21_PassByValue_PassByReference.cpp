// #include <iostream>
// #include<string>
// using namespace std;
// //pass by value
// void swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
//     int i=3, j=6;
//     swap(i, j);
//     cout<<i<<" "<<j<<" "<<endl;
    
//     return 0;
// }

#include <iostream>
#include<string>
using namespace std;
//pass by reference 

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
void funtion(int *x){
    cout<<*x<<"\n";
}
int main(){
    
    // int x=9;
    // int &y=x;
    // cout<<x<<" "<<y<<endl;
    // // y=99;
    //   cout<<x<<" "<<y<<endl;
    // int x=9;
    // int z=1;
    // int &y=x;
    // swap(x,z);
    // cout<<x<<" "<<z<<" "<<endl;
    int p=9;
    funtion(&p);
    return 0;
    
}


// #include<iostream>
// using namespace std;

// void funtion(int x){
    
//    x = x * 2;
//    cout<<x<<" ";
// }

// int main(){
//    int x=24;
//    funtion(x);
//    std::cout << x << std::endl;
    
    
//     return 0;
    
// }