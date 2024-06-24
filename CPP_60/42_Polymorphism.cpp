#include<iostream>
using namespace std;


// class A{
//     public:
//     void sayHello(){
//         cout<<"Hello Abhishek"<<endl;
//     }
//     // void sayHello()
//     // {
//     //     cout << "Hello Abhishek" << endl;
//     // }
// };

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout<<"output:"<<value2-value1<<endl;
        cout<<"Abhishek"<<endl;
    }
};


int main(){
    // your code here
    // A obj;
    // obj.sayHello();


    B obj1, obj2;
    obj1.a = 10;
    obj2.a = 20;
    obj1+obj2;

    // cout<<obj1.add()<<endl;
    // B obj2;
    // obj2.a = 20;
    // obj2.b = 10;
    // obj1+obj2;


   return 0;
}