#include <iostream>
#include <string>

enum Weekdays {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

std::string getDayName(Weekdays day) {
    switch(day) {
        case Mon: return "Monday";
        case Tue: return "Tuesday";
        case Wed: return "Wednesday";
        case Thu: return "Thursday";
        case Fri: return "Friday";
        case Sat: return "Saturday";
        case Sun: return "Sunday";
        default: return "Invalid day";
    }
}

int main() {
    Weekdays today = Wed;
    std::cout << "Today is " << getDayName(today) << std::endl;
    std::cout << "Tomorrow is " << getDayName(static_cast<Weekdays>(today+1)) << std::endl;

    return 0;
}
