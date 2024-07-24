#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>

using namespace std;

class Account {
private:
    string fname;
    string lname;
    float balance;
    int acc_num;

public:
    static int account_counter;

    // Default constructor
    Account() : fname(""), lname(""), balance(0.0), acc_num(0) {}

    Account(string f_name, string l_name, float b) {
        fname = f_name;
        lname = l_name;
        balance = b;
        acc_num = ++account_counter;
    }

    // Getters
    string get_fname() const { return fname; }
    string get_lname() const { return lname; }
    float get_balance() const { return balance; }
    int get_account_number() const { return acc_num; }

    // Setters
    void set_new_balance(float val) { balance = val; }

    // Display method
    void display() const {
        cout << "First Name: " << fname << endl;
        cout << "Last Name: " << lname << endl;
        cout << "Balance: " << balance << endl;
        cout << "Account Number: " << acc_num << endl;
    }

    // Save account details to a file
    void save_to_file(ofstream& file) const {
        file << fname << " " << lname << " " << balance << " " << acc_num << endl;
    }

    // Load account details from a file
    void load_from_file(ifstream& file) {
        file >> fname >> lname >> balance >> acc_num;
    }
};

int Account::account_counter = 0;

class Bank {
private:
    map<int, Account> bank_account;

    friend void add_new_account(Bank& b, Account& a);
    friend void delete_account(Bank& b, int account_num);
    friend void print_details(Bank& b, int account_num);

public:
    // Display all accounts
    Bank(){
           load_from_file("accounts.txt");
    }
    void display_all_accounts() const {
        for (const auto& pair : bank_account) {
            cout << "Account Number: " << pair.first << endl;
            pair.second.display();
        }
    }

    // Check if account exists
    bool is_account_present(int val) const {
        return bank_account.find(val) != bank_account.end();
    }

    // Get account by number
    Account& get_account(int val) {
        return bank_account[val];
    }

    // Set account details
    void set_account(int val, Account& account) {
        if (bank_account.find(val) != bank_account.end())
            cout << "Account already exists" << endl;
        else {
            bank_account[val] = account;
        }
    }

    // Save all accounts to file
    void save_to_file(const string& filename) const {
        ofstream file(filename);
        if (file.is_open()) {
            file << Account::account_counter << endl;  // Save the account counter
            for (const auto& pair : bank_account) {
                pair.second.save_to_file(file);
            }
            file.close();
        } else {
            cout << "Unable to open file for writing!" << endl;
        }
    }

    // Load all accounts from file
  void load_from_file(const string& filename) {
    ifstream file(filename); // Open the file for reading
    if (file.is_open()) {    // Check if the file was successfully opened
        int counter;
        file >> counter;  // Load the account counter
        Account::account_counter = counter;

        // Read accounts from the file
        while (file) {
            Account acc;
            acc.load_from_file(file); // Load account details into acc
            if (file && acc.get_account_number() != 0) { // Check if loading was successful
                bank_account[acc.get_account_number()] = acc; // Insert account into the map
            }
        }

        file.close(); // Close the file
    } else {
        cout << "Unable to open file for reading!" << endl; // Error message if file opening fails
    }
}

};

class Transaction {
public:
    static void deposit(Bank& b, int acc_num, float amount) {
        if (b.is_account_present(acc_num)) {
            cout << "Depositing amount: " << amount << endl;
            float current_balance = b.get_account(acc_num).get_balance();
            float new_balance = current_balance + amount;
            b.get_account(acc_num).set_new_balance(new_balance);
        } else {
            cout << "Account not found!" << endl;
        }
    }
};

void add_new_account(Bank& b, Account& a) {
    cout << "Adding new account..." << endl;
    b.bank_account[a.get_account_number()] = a;
}

void delete_account(Bank& b, int account_num) {
    if (b.bank_account.find(account_num) != b.bank_account.end()) {
        cout << "Deleting account number: " << account_num << endl;
        b.bank_account.erase(account_num);
    } else {
        cout << "Account not found!" << endl;
    }
}

void print_details(Bank& b, int account_num) {
    if (b.bank_account.find(account_num) != b.bank_account.end()) {
        cout << "Details of account number: " << account_num << endl;
        b.bank_account[account_num].display();
    } else {
        cout << "Account not found!" << endl;
    }
}

int main() {
    Bank b;
  // Load accounts from file

    while (true) {
        cout << "\nSelect your choice (1-5):\n";
        cout << "1. Create account\n";
        cout << "2. Delete account\n";
        cout << "3. Account inquiry\n";
        cout << "4. Deposit\n";
        cout << "5. Display all accounts\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 9) {
            // Save accounts to file
            break;
        }

        switch (choice) {
            case 1: {
                cout << "Create account\n";
                cout << "Enter your first name: ";
                string fname;
                cin >> fname;
                cout << "Enter your last name: ";
                string lname;
                cin >> lname;
                cout << "Enter the amount you want to deposit: ";
                float amount;
                cin >> amount;

                Account new_account(fname, lname, amount);
                add_new_account(b, new_account);
                new_account.display();
                 b.save_to_file("accounts.txt");
                break;
            }
            case 2: {
                cout << "Enter account number to delete: ";
                int acc_num;
                cin >> acc_num;
                delete_account(b, acc_num);
                 b.save_to_file("accounts.txt");
                break;
            }
            case 3: {
                cout << "Enter account number for details: ";
                int acc_num;
                cin >> acc_num;
                print_details(b, acc_num);
                 b.save_to_file("accounts.txt");
                break;
            }
            case 4: {
                cout << "Enter account number: ";
                int acc_num;
                cin >> acc_num;
                cout << "Enter amount to deposit: ";
                float amount;
                cin >> amount;
                Transaction::deposit(b, acc_num, amount);
                 b.save_to_file("accounts.txt");
                break;
            }
            case 5: {
                b.display_all_accounts();
                 b.save_to_file("accounts.txt");
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }

    return 0;
}
