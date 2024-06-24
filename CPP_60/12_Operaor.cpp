#include<iostream>
#include<string>
using namespace std;

int main(){

    int i=0;
    int j=2;
    int k;
    
    // i=i++ + ++i;
        // 1 + 3
    //    1+2+1+2+3+4
    // k =i + j + i++ + j++ + ++i + ++j;
    // cout<<i<<" "<<j<<"\n"<<k<<endl;
    // cout<<i<<endl;
        //0 //0 //1 //1
    i = i++ - --i + ++i - i--;
    cout<<i<<endl;
    return 0;
}