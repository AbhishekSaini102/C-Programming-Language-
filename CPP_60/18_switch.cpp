#include<iostream>
using namespace std;

int main(){

    // int ch;

    // cin >> ch;

    // switch (ch)
    // {
    // case 1:
    //     cout<<"MONDAY"<<endl;
    //     break;
    // case 2:
    //     cout<<"Case 2"<<endl;
    //     break;
    // case 3:
    //     cout<<"Case 3"<<endl;
    //     break;
    // case 4:
    //     cout<<"Case 4"<<endl;
    //     break;
    
    // default:
    //     break;
    // }

    char button;
    // cout<<"Input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':

        cout<<"Namaste"<<endl;
        break;
    case 'c':

        cout<<"Salut"<<endl;
        break;
    case 'd':
    
        cout<<"Hola"<<endl;
        break;
    case 'e':
        
        cout<<"Ciao"<<endl;
        break;
    case 'f':
        
        cout<<"Hallo"<<endl;
        break;
    default:
        cout<<"I am still learning more"<<endl;
        break;
    }
    return 0;

}