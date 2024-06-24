/*
Problem: Write a program that takes three integers as input: day, month, and year. The program should determine if the date is valid or not using only if-else statements.

The program should output:
- "Valid Date" if the date is valid.
- "Invalid Date" if the date is not valid.

Considerations:
- All months have at least 28 days.
- April, June, September, and November have 30 days.
- February has 28 days in a common year and 29 days in a leap year.
- A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400.

Note: You are not allowed to use any loops or arrays. Only if-else statements are allowed.
*/

#include<iostream>
using namespace std;
 

bool isLeapYear(int year){
    if(year % 400 == 0){
        return true;
    }
    else if(year % 100 ==0){
        return true;
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

bool isValidDate(int day, int month, int year){
    if(year<1 || year>9999 || month<1 || month>12 || day<1 || day>31){
        return false;
    }

    if(month==2){
        if(isLeapYear(year)){
            return (day<=29);
        }
        else{
            return (day<=28);
        }
    }

    if(month==4 || month==6 || month==8 || month==10){
        return(day<=30);
    }
}

int main() {
    int day, month, year;
    cout << "Enter day, month, and year: ";
    cin >> day >> month >> year;

    if(isValidDate(day, month, year)){
        cout << "valid date"<<endl;
    }    
    else{
        cout<<"invalid date"<<endl;
    }

    return 0;
}
