//Problem 2: Bank Account System
#include<bits/stdc++.h>
using namespace std;
class bank
{
	private:
		double balance;
		int accNumber;
	public:
		string name;
	bank(string n,double b,int a)
	{
		name = n;
		balance = b;
		accNumber = a;
	}
	void deposit(double a)
	{
		balance = balance+a;
		cout<<a<<" is added to your account"<<endl;
	}
	void withdraw(double a)
	{
		if(balance >= a)
		{
			balance = balance-a;
			cout<<a<<" is deducted from your account"<<endl;
		}
		else
		{
			cout<<"Insufficient funds"<<endl;
		}
	}
	void dispaly()
	{
		cout<<"Account Number is : "<<accNumber<<endl;
		cout<<"Avilable balance is : "<<balance<<endl;
		cout<<"Account Holder : "<<name<<endl;
	}
};
int main()
{
	bank b1("Harsha",100,10101);
	b1.dispaly();
	b1.deposit(200);
	b1.dispaly();
	b1.withdraw(1000);
	b1.dispaly();
	b1.withdraw(100);
	b1.dispaly();
}
