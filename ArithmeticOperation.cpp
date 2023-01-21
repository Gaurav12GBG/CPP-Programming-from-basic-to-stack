#include <iostream>
using namespace std;

class operation
{
public:
    void selectOP(){
        int ch;
        cout<<"\nWelcome in GBG`s Calculator :\n";
        cout<<"\n1. Addition\n";
        cout<<"2. Substraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
             
        cout<<"Please enter your chpoice like [1, 2, 3, 4]:";
        cin>>ch;
        switch(ch){
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mult();
                break;
            case 4:
                div();
                break;
            default:
                cout<<"Invalid Choice";
                  
        }

    }

    void add()
    {
        int a, b, c;
        cout<<"\nAddition Operation :\n";
        cout << "Enter the first number :\n";
        cin >> a;
        cout << "Enter the second number :\n";
        cin >> b;
        c = a + b;

        cout << "The addition of two numbers:" << c;
    }

    void sub()
    {
        int a, b, c;
        cout<<"Substraction Operation :\n";
        cout << "\n Enter the first number :\n";
        cin >> a;
        cout << "Enter the second number :\n";
        cin >> b;
        c = a - b;

        cout << "The addition of two numbers:" << c;
    }

    void mult()
    {
        int a, b, c;
        cout<<"Multiplication Operation :\n";
        cout << "\n Enter the first number :\n";
        cin >> a;
        cout << "Enter the second number :\n";
        cin >> b;
        c = a * b;

        cout << "The addition of two numbers:" << c;
    }

    void div()
    {
        int a, b, c;
        cout<<"Division Operation :\n";
        cout << "\n Enter the first number :\n";
        cin >> a;
        cout << "Enter the second number :\n";
        cin >> b;
        c = a / b;

        cout << "The addition of two numbers:" << c;
    }
};

int main()
{
    operation obj;
    obj.selectOP();
    obj.add();
    obj.sub();
    obj.mult();
    obj.div();

    return 0;
}