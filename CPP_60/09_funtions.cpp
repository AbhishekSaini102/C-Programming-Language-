#include<iostream>

using namespace std;


int addition(int x, int y){
    int result = x + y;
    return result;
}

void status(string name){
    cout<<"I am a function with no return type "<<name<<endl;
}
int main(){
    status("Hello");
    int response = addition(10, 20);
    cout<<response<<endl;
    return 0;
}