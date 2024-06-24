#include <iostream>
#include<string>
using namespace std;

string name="Abhishek";

void funtion(){
   
    int x=10;
    for(int y=0; y<5; y++){
        x=x+y; 
        int z=x*x;
        cout<<x<<" "<<y<<" "<<z<<""<<endl;
    }
    cout<<name<<"\n";
}

int main(){
    
    cout<<name<<"\n";
    name="Saini";
    funtion();
    // cout<<name<<"\n";
    // cout<<x; //not accessible here because of local scope

    return 0;
}