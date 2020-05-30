//bank_accounts
#include <iostream>
using namespace std;

class BankAccount{

private:
	double balance;

public:
	void welcome_msg(){
		cout << "Welcome to The Bank of James" << endl;
	}

};


int main()
{
	cout << "Hello World" << endl;


	BankAccount bank_account;
	bank_account.welcome_msg();

	return 0;
}
