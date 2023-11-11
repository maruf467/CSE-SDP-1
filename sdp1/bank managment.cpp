#include <iostream>
using namespace std;

class Account {
private:
    string name;
    int accountNumber;
    float balance;

public:
    void createAccount() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully. New balance is " << balance << endl;
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance is " << balance << endl;
        }
    }

    void displayAccount() {
        cout << "Account Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    Account account;
    int choice;

    do {
        cout << "\nBank Management System Menu:" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display Account Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.displayAccount();
                break;
            case 5:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}