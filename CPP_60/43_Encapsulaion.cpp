#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance; // Private attribute
public:
    BankAccount() : balance(0) {}

    void deposit(int amount)
    {
        balance += amount;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawal successful. Current balance: " << balance << endl;
    }
};

int main()
{
    BankAccount myAccount;
    myAccount.deposit(1000);
    myAccount.withdraw(50);
    return 0;
}
