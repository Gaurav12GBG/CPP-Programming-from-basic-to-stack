#include <iostream>
using namespace std;

// class
class Bank {
private:
    int acno;
    char name[30];
    long balance;

public:
    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};

int Bank::Search(int a)
{
    if (acno == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}

// main code
int main()
{
    Bank C[3];

    int found = 0, a, ch, i;
    for (i = 0; i <= 2; i++) {
        C[i].OpenAccount();
    }

    do {
        // display options
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        // user input
        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: // displating account info
            for (i = 0; i <= 2; i++) {
                C[i].ShowAccount();
            }
            break;
        case 2: // searching the record
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: // deposit operation
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4: // withdraw operation
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5: // exit
            cout << "Have a nice day" << endl;
            break;

        default :
            cout<<"Invalid Choice"<<endl;
        }
    } while (ch != 5);
    return 0;
}

/* 
OUTPUT:

Enter Account Number: 157896
Enter Name: vaishnavi
Enter  Balance: 50000
Enter Account Number: 101278
Enter Name: Gaurav
Enter  Balance: 20000
Enter Account Number: 456923
Enter Name: tanmay
Enter  Balance: 5000


1:Display All
2:By Account No
3:Deposit
4:Withdraw
5:Exit
Please input your choice: 1
Account Number: 157896
Name: vaishnavi       
Balance: 50000        
Account Number: 101278
Name: Gaurav
Balance: 20000        
Account Number: 456923
Name: tanmay
Balance: 5000


1:Display All
2:By Account No       
3:Deposit
4:Withdraw
5:Exit
Please input your choice: 2
Account Number? 157896
Account Number: 157896
Name: vaishnavi
Balance: 50000


1:Display All
2:By Account No
3:Deposit
4:Withdraw
5:Exit
Please input your choice: 3
Account Number To Deposit Amount? 157896
Account Number: 157896
Name: vaishnavi
Balance: 50000
Enter Amount U want to deposit? 1000


1:Display All
2:By Account No
3:Deposit
4:Withdraw
5:Exit
Please input your choice: 4
Account Number To Withdraw Amount? 157896
Account Number: 157896
Name: vaishnavi
Balance: 51000
Enter Amount U want to withdraw? 25000


1:Display All
2:By Account No
3:Deposit
4:Withdraw
5:Exit
Please input your choice: 1
Account Number: 157896
Name: vaishnavi
Balance: 26000
Account Number: 101278
Name: Gaurav
Balance: 20000
Account Number: 456923
Name: tanmay
Balance: 5000


1:Display All
2:By Account No
3:Deposit
4:Withdraw
5:Exit
Please input your choice: 5
Have a nice day
 */