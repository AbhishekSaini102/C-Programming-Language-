#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};;
class Human{
    public:
    int age;
    int weight;

    void talk(){
        cout<<"Talking"<<endl;
    }

};

class Hybrid: public Animal, public Human{
    
};
int main(){
    // your code here
    Hybrid h;
    h.bark();
    h.talk();

    return 0;
}