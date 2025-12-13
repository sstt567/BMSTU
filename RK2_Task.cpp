#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string ownerName;
    double balance;

public:

    BankAccount(int num,string name, double bal) {
        accountNumber = num;
        ownerName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    void show() {
        cout << "Счет: " << accountNumber << std::endl;
        cout << "Владелец: " << ownerName << std::endl;
        cout << "Баланс: " << balance << " руб." << std::endl;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:

    SavingsAccount(int num,string name, double bal, double rate)
        : BankAccount(num, name, bal) {
        interestRate = rate;
    }

    void addInterest() {
        double currentBalance = getBalance();
        double interest = currentBalance * interestRate / 100;
        deposit(interest);
    }

    void show() {
        BankAccount::show();
        cout << "Ставка: " << interestRate << "%" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    cout << "=== Обычный счет ===" << endl;
    BankAccount account1(1001, "Нахид", 5000);
    account1.show();

    account1.deposit(1000);
    cout << "\nПосле пополнения:" <<endl;
    account1.show();

    if (account1.withdraw(2000)) {
        cout << "\nСнятие успешно" << endl;
    }
    else {
        std::cout << "\nНедостаточно средств" <<endl;
    }
    account1.show();

    cout << "\n\n=== Сберегательный счет ===" << endl;
    SavingsAccount account2(2001, "Cтас", 10000, 5);
    account2.show();

    account2.deposit(2000);
    cout << "\nПосле пополнения:" <<endl;
    account2.show();

    account2.addInterest();
    cout << "\nПосле начисления процентов:" <<endl;
    account2.show();

    return 0;
}