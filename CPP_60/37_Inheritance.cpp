#include <iostream>
#include <string>
using namespace std;

// Inheritance
class Human{

    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this->age;
        } 
        void setWeight(int weight){
            this->weight = weight;
        }  
};

// class Male : public Human{

//     public:
//     string color;

//     void sleep(){
//         cout<<"Male Sleeping"<<endl;
//     }   
// };

// class Male : protected Human
// {

//     public:
//         string color;

//         void sleep()
//         {
//             cout << "Male Sleeping" << endl;
//         }

//     int getHeight(){
//         return this->height;
//     }
// };

class Male : private Human
{

public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{

    Male obj1;
    cout<<obj1.getHeight()<<endl;
    // cout<<obj1.getHeight()<<endl;
    // obj1.setWeight(70);
    // cout<<obj1.weight<<endl;
    // obj1.sleep();

    // cout<<obj1.height<<endl;
    // cout<<obj1.weight<<endl;
    // cout<<obj1.age<<endl;
  
    // cout<<obj1.color<<endl;

    // obj1.setWeight(60);
    // cout<<obj1.weight<<endl;

    // obj1.sleep();


    return 0;
}