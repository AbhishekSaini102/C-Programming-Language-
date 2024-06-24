#include<iostream>
using namespace std;

//Hierarchical Inheritance
class A{
    public:
    void display1(){
        cout<<"Class A"<<endl;
    }
};
class B: public A{
    public:
    void display2(){
        cout<<"Class B"<<endl;
    }
};
class C: public A{
    public:
    void display3(){
        cout<<"Class C"<<endl;
    }
};
int main(){
    // your code here
    A obj;
    obj.display1();
    
    B obj1;
    obj1.display1();
    obj1.display2();
    // ob1.display3();

    C obj2;
    obj2.display1();
    obj2.display3();

   return 0;
}