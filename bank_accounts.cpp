//bank_accounts
#include <string>
#include <iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

class BankAccount{

private:
	double balance;

public:
	void welcome_msg(string customer_name){
		cout << "Welcome " << customer_name << " to The Bank of James" << endl;
	}

	void print_balance(){
		cout << "Your balance is £" << balance << endl;
	}
	
	void deposit(double amount_dep){
		if(amount_dep > 0){
			balance += amount_dep;
		}
		else
			cout << "Invalid deposit" << endl;
	}

	void withdraw(double amount_wit){
		if(amount_wit > 0 && amount_wit < balance){
			balance -= amount_wit;
		}
		else
			cout << "Invalid withdrawal" << endl;

	}

};


int main()
{

	BankAccount bank_account;

	//Ask and print customer's name
	cout << "Please enter your name" << endl;
	string customer_name;
	cin >> customer_name;
	bank_account.welcome_msg(customer_name);

	bank_account.deposit(100); //test

	int use_atm = TRUE;
	while(use_atm == TRUE)
	{
		cout << "\nWelcome to the Bank of James ATM" << endl;
		cout << "1. View Balance" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdrawal" << endl;
		cout << "4. Quit" << endl;

		int atm_option;
		cin >> atm_option;

		switch(atm_option){
			case 1: //View balance
			bank_account.print_balance();
			break;

			case 2: //Deposit
			cout <<"How much would you like to deposit?" << endl;
			double amount_dep;
			cin >> amount_dep;
			bank_account.deposit(amount_dep);
			break;

			case 3: //Withdraw
			cout <<"How much would you like to withdraw?" << endl;
			double amount_wit;
			cin >> amount_wit;
			bank_account.withdraw(amount_wit);
			break;

			case 4: //Quit
			use_atm = FALSE;
		}

	}

	return 0;
}
