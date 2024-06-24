#include <iostream>
using namespace std;

int main() {
    int inner_counter = 0;
    int max_iterations = 1000; // Set your own limit

    // Pattern generation code
    // int rows =10;
     // You can change this to the number of rows you want
    int rows;
    cin>>rows;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= rows; j++) {

            if(i == 1 || i == rows || j == 1 || j == rows){
                std::cout << "*";
            }
            else{
                std::cout << " ";
            }
            if (++inner_counter > max_iterations) {
                std::cout << "Maximum iteration limit exceeded in inner loop. Possible infinite loop detected. Exiting...\n";
                return 0;
            }
        }
        std::cout << "\n";
    }

    return 0;
}
