#include<iostream>
#include<string>
// using std::string
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
    
};
// This is only a blueprint
class Employee:AbstractEmployee{

    private:
        // Encapsulation
        // Data Hiding
        
        string Company;
        int Age;
    protected:
        string Name;
    public:
        // string Name;
        // string Company;
        // int Age;
    
    void setName(string name){
        Name=name;
    }
    void setCompany(string company){
        Company=company;
    }
    void setAge(int age){
        if(age>=18){
            Age=age;
        }
    }
    string getName(){
        return Name;
    }
    string getCompany(){
        return Company;
    }
    int getAge(){
        return Age;
    }
   
    void IntroduceYourself(){

      cout<<"Name:"<<Name<<endl;
      cout<<"Company:"<<Company<<endl;
      cout<<"Age:"<<Age<<endl;
    }

    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted" << endl;
        }
        else
        {
            cout << Name << ", sorry no promotion for you" << endl;
        }
    }


    //create a Constructor
    Employee(string name, string company, int age){
        Name=name;
        Company=company;
        Age=age;
    }

    // Destructor
    // ~Employee(){
    //     cout<<"Destructor called for "<<Name<<endl;
    // }

    virtual void Work(){
        cout<<Name<<" checking Emails and Tasks"<<endl;
    }

};

class Developer : public Employee{
    public:
        string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
    {
        FavProgrammingLanguage=favProgrammingLanguage;
    }
    void FixBug(){
        // cout<<getName()<<" has fixed bug using "<<FavProgrammingLanguage<<endl;
        cout << Name << " has fixed bug using " << FavProgrammingLanguage << endl;
    }
    
    // void Work()
    // {
    //     cout << Name << " is coding in " << FavProgrammingLanguage << endl;
    // }
};

class Teacher : public Employee{
    // private:
    public:
        string Subject;
        Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
        {
            Subject=subject;
        }

        void PrepareLesson(){
            cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
        }
        // void UpdateSubject(string subject){
        //     Subject=subject;
        // }
        // void sub(){
        //     cout<<"sub:"<<Subject<<endl;
        // }
         void Work()
        {
            cout << Name << " Is Reading" << endl;
        }
};

int main(){

    //int number;
    Employee employee1=Employee("Abhishek Saini","Google",24);
    // employee1.Name="Abhsihek Saini";
    // employee1.Company="Sainia";
    // employee1.Age=24;

    // employee1.IntroduceYourself();
    // employee1.AskForPromotion();

    Employee employee2=Employee("Aashi Saini","Amazon",25);
    // employee2.Name="Aashi Saini";
    // employee2.Company="Amazon";
    // employee2.Age=25;
    // employee2.IntroduceYourself();
    employee1.setAge(31);
    // cout<<employee1.getAge()<<endl;
    cout<<"Name:"<<employee1.getName()<<" Company:"<<employee1.getCompany()<<" Age:"<<employee1.getAge()<<endl;
    employee1.AskForPromotion();

    Developer d=Developer("Abhishek Saini","Google",24,"C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Neelam", "SSS", 30, "Computer Science");
    t.PrepareLesson();
    t.AskForPromotion();
    t.Subject="Maths";
    // t.sub();
    // t.UpdateSubject("Maths");
    // t.PrepareLesson();

    // employee1.Work();
    // d.Work();
    // t.Work();

    // Employee *e1=&d;
    Employee *e2=&t;

    // e1->Work();
    e2->Work();
    return 0;

}


//add bug-fix git
//add second bug-fix git
//add third bug-fix git
//add fourth bug-fix git
//add fifth bug-fix git
//another fix message for light mode
//another fix message for light mode updated