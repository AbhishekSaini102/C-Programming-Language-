// #include<iostream>
// #include<string>
// using namespace std;

// //funtion with argument and return value
// // int addition(int a, int b){
    
// //     int result=a+b;
// //     return result;
// // }

// //funtion with argument and no return value
// // void status(string name){
// //     cout<<"is status "<<name<<"?"<<"\n";
// // }

// //funtion with no argument and no return value
// // void displayMessage() {
// //     cout << "Hello, World!" << endl;
// // }

// //funtion with no argument and return value
// int getFive() {
//     return 5;
// }



// int main() {
    
//     // int x=addition(10, 5);
//     // cout<<x<<" ";
//     // addition(10,5);
//     // status("true");
//     // cout y;
    
//     // displayMessage();
    
//     int s = getFive();
//     cout<<s;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// // User-defined function
// double calculateArea(double length, double width) {
//     return length * width;
// }

// int main() {
//     double area = calculateArea(5.0, 3.0);
//     cout << "The area of the rectangle is " << area << endl;
//     return 0;
// }


// #include<iostream>
// #include<cmath> // for sqrt function
// using namespace std;

// int main() {
//     double number = 9.0;
//     double root = sqrt(number);
//     cout << "The square root of " << number << " is " << root << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
  // Corrected lambda function
  auto add = [](int a, int b) { return a + b; };

  int sum = add(5, 3);
  cout << "The sum is " << sum << endl;
  return 0;
}


