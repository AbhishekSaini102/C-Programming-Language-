#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};
//MultiLevel Inheritance
class Dog: public Animal{
   
};

class germanShepherd: public Dog{
    
};

int main(){
    // your code here
    Dog d;
    d.eat(); 
    cout<<d.age<<endl; 
    germanShepherd gs;
    gs.eat();                
   return 0;
}