// #include<iostream>
// using namespace std;

// int fibonacci(int n) {
//     if(n <= 1)
//         return n;
//     else
//         return fibonacci(n-1) + fibonacci(n-2);
// }

// int main() {
//     int n = 10;
    
//     cout << "Fibonacci number is: " << fibonacci(n) << endl;
//     return 0;
// }

//without recursion approach
#include<iostream>
using namespace std;

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
}

int main() {
    int n = 11;
    cout << "Fibonacci Series: ";
    fibonacci(n);
    return 0;
}

// #include<iostream>
// using namespace std;

// int fibonacci(int n) {
//     if(n <= 1)
//         return n;
//     else
//         return fibonacci(n-1) + fibonacci(n-2);
//                 //0112358
//                 // 2+1=3
// }

// int main() {
//     int start = 0, end = 10;
//     for(int i = start; i <= end; i++) {
//         cout << "Fibonacci number " << i << " is: " << fibonacci(i) << endl;
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int fibonacci(int n, vector<int>& f) {
//     if(f[n] != -1)
//         return f[n];
//     else
//         f[n] = fibonacci(n-1, f) + fibonacci(n-2, f);
//     return f[n];
// }

// int main() {
//     int start = 0, end = 10;
//     vector<int> f(end+1, -1);
//     f[0] = 0; f[1] = 1;
//     for(int i = start; i <= end; i++) {
//         cout << "Fibonacci number " << i << " is: " << fibonacci(i, f) << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int fibonacci(int n) {
//     int a = 0, b = 1, c;
//     if(n == 0)
//         return a;
//     for(int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

// int main() {
//     int start = 1, end = 10;
//     for(int i = start; i <= end; i++) {
//         cout << "Fibonacci number " << i << " is: " << fibonacci(i) << endl;
//     }
//     return 0;
// }

