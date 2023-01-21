#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter the first number: " << endl;
    cin >> x;
    cout << "Enter the second number: " << endl;
    cin >> y;

    if (x > y)
    {
        cout << "X is greater number than Y" << endl;
    }
    else
    {
        cout << "X is lesser number than Y" << endl;
    }

    return 0;
}

/* 
OUTPUT:
i)
Enter the first number: 
546
Enter the second number: 
412
X is greater number than Y

ii)
Enter the first number: 
5000
Enter the second number: 
6522
X is lesser number than Y
 */