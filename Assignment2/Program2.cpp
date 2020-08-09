#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balace can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{

	int openBalance;
	cout << "enter the amount you want to start Amrit account with? \n";
	cin >> openBalance;
	account Amrit(openBalance);
	int paisa;
	cout << "enter the amount you want to add in Amrit's account? \n";
	cin >> paisa;
	Amrit.Credit(paisa);
	cout << Amrit.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to removein Amrit's account? \n";
	cin >> paisa1;
	Amrit.Debit(paisa1);
	cout << Amrit.getBalance() << "\n";
	cout << "enter the amount you want to start Amritesh account with? \n";
	cin >> openBalance;
	account Amritesh(openBalance);
	cout << "enter the amount you want to add in Amritesh's account? \n";
	cin >> paisa;
	Amritesh.Debit(paisa);
	cout << Amritesh.getBalance() << "\n";
	cout << "enter the amount you want to removein Amritesh's account? \n";
	cin >> paisa1;
	Amritesh.Debit(paisa1);
	cout << Amritesh.getBalance() << "\n";






	return 0;
}