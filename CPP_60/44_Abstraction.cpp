#include <iostream>
using namespace std;

// Abstract class
class AbstractCar
{
public:
    virtual void start() = 0; // Pure virtual function makes this class Abstract class
    virtual void stop() = 0;
};

// Concrete class
class Car : public AbstractCar
{
public:
    void start() { cout << "Car started" << endl; }
    void stop() { cout << "Car stopped" << endl; }
};

int main()
{
    Car myCar;
    myCar.start();
    myCar.stop();
    return 0;
}

// #include <iostream>
// using namespace std;

// // Function prototypes
// void startCar();
// void stopCar();

// // Function pointers as abstraction
// void (*start)() = startCar;
// void (*stop)() = stopCar;

// // Function definitions
// void startCar()
// {
//     cout << "Car started" << endl;
// }

// void stopCar()
// {
//     cout << "Car stopped" << endl;
// }

// int main()
// {
//     start();
//     stop();
//     return 0;
// }
