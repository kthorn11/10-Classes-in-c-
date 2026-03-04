// E-Wallet Top-Up and Spending Guard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class EWallet
{
private:
    int balance;


public:
    void set_balance(int new_balance)
    {
        if (new_balance >= 0)
        {
            balance = new_balance;
        }
        else
        {
            cout << "Invalid Balance!" << endl;
        }
    }

    int get_balance()
    {
        return balance;

   }

    void spent(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = amount;

        }
        else
        {
            cout << "Payment Declined!" << endl;
        }

    }
};



int main()
{

    EWallet wallet;

    int initial_balance;
    int spend_amount;

    cout << "Enter balance: ";
    cin >> initial_balance;


    cout << "Enter the spend amount: ";
    cin >> spend_amount;

    wallet.set_balance(initial_balance);
    wallet.spent(spend_amount);

    cout << "Final Balance: " << wallet.get_balance() << endl;


        return 0; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
