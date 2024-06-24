// #include<iostream>
// using namespace std;

// // Function declaration
// int square(int num);

// int main() {
//     int number = 5;
//     int result = square(number); // Function call
//     cout << "The square of " << number << " is " << result << endl;
//     return 0;
// }

// // Function definition
// int square(int num) {
//     return num * num; // Return statement
// }


// #include<iostream>
// using namespace std;

// // Function declaration
// void square(int num);

// int main() {
//     int number = 5;
//     square(number); // Function call
//     return 0;
// }

// // Function definition
// void square(int num) {
//     cout << "The square of " << num << " is " << num * num << endl; // Print statement
// }


// Using cout in a function: When you use cout in a function, the function directly prints the result to the console. This is useful when you want to display the result immediately and don’t need to use it for further calculations. However, this limits the reusability of your function because it can’t provide a value that other parts of your code can use.

// Using return in a function: When you use return, the function calculates a result and sends it back to the part of the code that called the function. This is useful when you want to use the result for further calculations or operations in your code. The function doesn’t display the result; it simply provides it to the calling code, which can choose to display it (for example, by using cout) or use it in other ways.