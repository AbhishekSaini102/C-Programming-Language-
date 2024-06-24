#include<iostream>
#include<string>
using namespace std;

//Encapsulation
class Student{

    private:
        string name;
        int age;
        int roll_no;

    public:
        int getAge(){
            return this->age;
        }
};

int main(){
    
    Student object;

    cout<<object.getAge()<<endl;

    return 0;
}