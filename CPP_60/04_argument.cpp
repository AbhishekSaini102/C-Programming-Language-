// #include<iostream>
// using namespace std;

// int main(int argc, char *argv[]) {
//     cout << "You have entered " << argc << " arguments:" << "\n";
//     for (int i = 0; i < argc; ++i) 
//         cout << argv[i] << "\n";
//     return 0;
// }

#include<iostream>
#include<cstdlib> // for atoi function

using namespace std;

int main(int argc, char *argv[]) {
    if(argc != 3) {
        cout << "Please provide two numbers as arguments." << endl;
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    cout << "Product of " << num1 << " and " << num2 << " is " << num1*num2 << endl;

    return 0;
}

