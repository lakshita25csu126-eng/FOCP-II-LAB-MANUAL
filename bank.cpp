#include<iostream>
using namespace std;
class BankAccount
{
    string accountHolderName;int accountNumber;double balance;
    public:
    void inputDetails();
	void displayDetails();
	void deposit(double amount);
	void withdraw(double amount);
};
    void BankAccount::inputDetails(){
        cout<<"enter account no.: ";
        cin>>accountNumber;
        cout<<"enter account name: ";
        cin.ignore();
        getline(cin,accountHolderName);
        cout<<"enter account balance: ";
        cin>>balance;

    }
    void BankAccount::deposit(double amount)
    {
        balance+=amount;
        cout<<"\n amount deposited \n Balance: "<<balance;
    }
    void BankAccount::withdraw(double amount)
    {
        if(amount>balance){
            cout<<"Access denied";
        }
        else{
            balance-=amount;
            cout<<"Amount withdrawn \n Balance: "<<balance;
        }
    }

    void BankAccount::displayDetails(){
        cout<<"\n account no.: "<<accountNumber;
        cout<<"account name:"<<accountHolderName;
        cout<<"\n balance: "<<balance;
    }

int main(){
    BankAccount ac1;
    ac1.inputDetails();
    char choice;
    cout<<"\n D for deposit W for withdrawl: ";
    cin>>choice;
    if(choice=='D'){
    ac1.deposit(5000);
    }
    else 
    {
    ac1.withdraw(12000);
    }
    ac1.displayDetails();
   
    return 0;
}