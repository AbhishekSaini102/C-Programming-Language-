//for loop

// #include<iostream>
// using namespace std;

// int main(){

//     int x, sum=0;
    
//     cin>>x;
//     for(int i=1; i<=10; i++){
//         // sum=x+1;
//         sum+=x;
//         // x++;
//         cout<<sum<<endl;
//     }
//      cout<<sum<<endl;
//     return 0;
// }

// while loop
// #include<iostream>
// using namespace std;

// int main(){

//     int x;
//     cin>>x;
//     while(x>=0){
//         cout<<x<<endl;
//         cin>>x;
//     }    
//     cout<<"Number is negative"<<endl;
//     return 0;
// }


//do while loop

// #include<iostream>
// using namespace std;

// int main(){

//     int x;
//     cin>>x;
//     do
//     {
//        cout<<x<<endl;
//        cin>>x;
//     } while (x>0);
    
    
//     return 0;
// }

//do while
#include<iostream>
#include<string>
using namespace std;

bool isValid(const string& username, const string& password) {
    // Check if the username or password are empty
    if (username.empty() || password.empty()) {
        cout << "Username or password cannot be empty. Please try again." << endl;
        return false;
    }

    if (password.empty()) {
        cout << "Password cannot be empty. Please try again." << endl;
        return false;
    }

    // Check if the password is at least 8 characters long
    if (password.length() < 8) {
        cout << "Password must be at least 8 characters long. Please try again." << endl;
        return false;
    }

    // If all checks pass, the username and password are valid
    return true;
}


int main(){

    string username, password;
    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
    } 
    while (!isValid(username, password));
    cout<<"Login Successful"<<endl;

    return 0;
}
