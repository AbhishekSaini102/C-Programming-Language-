#include <iostream>
#include <string>
#include <cctype>

class Compiler {
    std::string::iterator it;

public:
    Compiler(std::string::iterator begin) : it(begin) {}

    int expr() {
        int result = term();
        while (true) {
            if (*it == '+') {
                ++it;
                result += term();
            } else if (*it == '-') {
                ++it;
                result -= term();
            } else {
                break;
            }
        }
        return result;
    }

private:
    int term() {
        int result = number();
        while (true) {
            if (*it == '*') {
                ++it;
                result *= number();
            } else if (*it == '/') {
                ++it;
                result /= number();
            } else {
                break;
            }
        }
        return result;
    }

    int number() {
        int result = 0;
        while (std::isdigit(*it)) {
            result = result * 10 + (*it - '0');
            ++it;
        }
        return result;
    }
};

int main() {
    std::string input;
    std::getline(std::cin, input);
    Compiler compiler(input.begin());
    std::cout << compiler.expr() << std::endl;
    return 0;
}
