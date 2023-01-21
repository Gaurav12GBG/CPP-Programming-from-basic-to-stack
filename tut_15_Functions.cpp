// Functions in c++
#include <iostream>
using namespace std;
//Function prototype
int sum(int a, int b);
void g();

int main()
{

    int num1, num2;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;

    //num1 and num2 are actual parameters
    cout << "The sum is" << sum(num1, num2);

    int sum(int a, int b)
    {
        //Formal parameters a and b will be taking values from actual parameters
        //num1 and num2.
        int c = a + b;
        return c;
    }

    void g()
    {
        cout << "\nHello, Good morning";
    }

    return 0;
}
