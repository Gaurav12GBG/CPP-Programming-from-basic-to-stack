#include<iostream>
using namespace std;
void add();
void sub();
void mult();
void div();
void menu();
void again();

int main()
{
    int ch;
    menu();

    do
    {
        // menu();
        cout << "\nEnter your choice" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Addition operation :" << endl;
            add();
            break;
        case 2:
            cout << "Subtraction operation :" << endl;
            sub();
            break;
        case 3:
            cout << "Multiplication operation :" << endl;
            mult();
            break;
        case 4:
            cout << "Division operation :" << endl;
            div();
            break;
        case 5:
            exit(ch);
            break;

        default:
            cout << "Invalid choice" << endl;
            again();
            break;
        }

    } while (ch != 6);
    return 0;
}

void menu()
{
    cout << "\nWelcome in GBG`s Calculator::" << endl;
    cout << "\nOperations:" << endl;
    cout << " 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Exit" << endl;
}

void add()
{
    int num1, num2, result;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
}

void sub()
{
    int num1, num2, result;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
}

void mult()
{
    int num1, num2, result;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
}

void div()
{
    int num1, num2;
    float result;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    if (num2 == 0)
    {
        cout << "Sorry !! Can`t divided by Zero" << endl;

    }
    else
    {
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
    }
}

void again()
{
    char ch2;
    cout << "Do u want to continue ? if yes then press 'Y' Otherwise press 'N':" << endl;
    cin >> ch2;
    if ((ch2 == 'Y') || (ch2 == 'y'))
    {
        menu();
    }
    else if ((ch2 == 'N') || (ch2 == 'n'))
    {
        cout << "\nThanks for using GBG`s calculator..." << endl;
        cout << "See You Later !!!" << endl;
    }
}
