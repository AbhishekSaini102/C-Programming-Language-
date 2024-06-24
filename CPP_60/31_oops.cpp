#include <iostream>
#include <cstring>
// #include "32_Hero_Class.cpp"
using namespace std;

class Hero{

    private:
    // char name[100];
    char level;
    
    public:
    char *name;
    int health;
    // int attack;
    // int defense;
    // int speed;
    // int experience;
    // int gold;
    // int mana;
    // int strength;
    // int dexterity;
    // int intelligence;
    // int wisdom;
    // int charisma;
    // int constitution;
    // int luck;
    // int agility;
    // int vitality;
    // int perception;
    // int endurance;


    void print(){

        cout<<"[ "<<"name : "<<this->name<<",";
        cout << " health : " << this->health << ",";
        cout<<" level : "<<this->level<<" ]";
        cout<<endl;
    }
    // void print1(){
    //     cout<<"Level:"<<level<<endl;
    // }

   

    
    Hero(){
        cout<<"Default Constructor called"<<endl;
        name = new char[100];
    }
    // Parameterized Constructor
    Hero(int health, char level){
        cout<<"this->"<<this<<endl;
        this->health = health;
        this->level = level;
    }

    //copy constructor
    Hero(Hero &h){

        char *name = new char[strlen(h.name)+1];
        strcpy(name, h.name);
        this->name = name;

        // cout<<"Copy Constructor called"<<endl;
        this->health = h.health;
        this->level = h.level;
    }
    char getLevel(){
        return level;
    }
    void setLevel(char l){
        level = l;
    }
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }
    void setName(char *n){
        strcpy(this->name, n);
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
        // delete [] name;
    }
};

int main(){


    Hero hero1;

    Hero *hero2 = new Hero();

    /*
    //shallow copy
    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('A');
    char name[9]="Abhishek";
    hero1.setName(name);
    hero1.print();

    //use default copy constructor

    // Hero hero2 = hero1;
    // hero2.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0]='S';
    hero1.print();

    hero2.print();

    hero1 = hero2;
    hero1.print();
    hero2.print();
    */




    // Hero Abhi(100, 'A');
    // Abhi.print();

    // //Copy Constructor
    // Hero saini(Abhi); // saini.health=Abhi.health;
    //                 // saini.level=Abhi.level;

    // saini.print();

    /*// created a Object 
    // cout<<"hi:"<<endl;
    Hero a(10, 'A');  //a.Hero() defalut constructor
    // cout<<"bye:"<<endl;
    // cout<<"Adress of a:"<<&a<<endl;
    a.print();
    a.print1();

    Hero *h = new Hero(100, 'B'); //h->Hero() defalut constructor
    // cout<<"Adress of h:"<<&h<<endl;
    h->print();
    h->print1();

    Hero temp(100, 'c'); //temp.Hero() defalut constructor
    temp.print();
    temp.print1(); */



    /*
    // ceated a Object
    // static allocation
    Hero Abhishek;
    Abhishek.setLevel('A');
    Abhishek.setHealth(100);
    cout<<"Abhishek Level:"<<Abhishek.getLevel()<<endl;
    cout<<"health:"<<Abhishek.health<<endl;

    //dynamic allocation
    Hero *Abhisheksaini = new Hero();
    Abhisheksaini->setLevel('A');
    Abhisheksaini->setHealth(100);

    cout<<"Abhishek Level:"<<(*Abhisheksaini).getLevel()<<endl;
    cout<<"health:"<<(*Abhisheksaini).health<<endl;


    cout<<"Abhishek Level:"<<Abhisheksaini->getLevel()<<endl;
    cout<<"health:"<<Abhisheksaini->health<<endl;

    Abhishek.setLevel='B';
    Abhishek.setLevel('N');
    cout<<"Abhishek Level:"<<Abhishek.getLevel()<<endl;
    Abhishek.setHealth(80);


    // simple print the data from class
    Abhishek.health = 100;
    Abhishek.setLevel('A');
    cout<<"health:"<<Abhishek.health<<endl;
    cout<<"level:"<<Abhishek.getLevel()<<endl;
    cout << "size:" << sizeof(Abhishek) << endl;
    */
    return 0;
}

