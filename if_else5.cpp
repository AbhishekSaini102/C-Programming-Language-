/*
Problem: Write a program that takes two dates as input in the format dd-mm-yyyy. The program should calculate the number of days between the two dates.

Considerations:
- All months have at least 28 days.
- April, June, September, and November have 30 days.
- February has 28 days in a common year and 29 days in a leap year.
- A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400.

Note: You are not allowed to use any built-in date functions or libraries. Only basic arithmetic operations and if-else statements are allowed.
*/

#include<iostream>
using namespace std;

bool isLeapYaer(int year){
    if(year % 400 == 0){
        return true;
    }
    else if(year % 100 == 0){
        return true;
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

bool isValidData(int day, int month, int year){
    if(day<1 || day>31 || month<1 || month>12 || year<1 || year>9999){
        return false;
    }

    if(month==2){
        if(isLeapYaer(year)){
            return (day<=28);
        }
        else{
            return (day<=29);
        }
    }

    if(month==4 || month==6 || month==8 || month==10){
        
        return (day<=30);
    }
}
int main(){

    int x,y,z, a,b,c;
    cout<<"Enter a date in dd--mm--yyyy format"<<endl;
    cin>>x>>y>>z;
    cout<<"Enter a second date in dd--mm--yyyy format"<<endl;
    cin>>a>>b>>c;


    if(isValidData(x, y, y)){
        
    }
    else{
        cout<<"invalid date"<<endl;
    }
    return 0;
}

