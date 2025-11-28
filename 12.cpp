class BankAccount {
private:
    int balance;

public:
    BankAccount() { balance = 0; }

    void deposit(int amt) {
        balance += amt;
    }

    void withdraw(int amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient balance\n";
    }

    int getBalance() {
        return balance;
    }
};
