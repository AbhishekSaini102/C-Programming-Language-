#include<iostream>
using namespace std;

int main(){

    int choice;
    cout<<"Enter your choice"<<endl;
    cin>>choice;

    switch (choice)
    {
    case (1):
        cout<<"Apple"<<endl;
        break;
    
    case (2):
        cout<<"Abhishek"<<endl;
        break;

    case (3):
        cout<<"mango"<<endl;
        break;

    default:
        break;
    }
    return 0;
}
