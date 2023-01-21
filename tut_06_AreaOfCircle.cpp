#include <iostream>
using namespace std;

int main()
{
    int pi = 3.142;
    int radius, AreaOfCircle;

    cout << "Enter the radius of circle :" << endl;
    cin >> radius;

    AreaOfCircle = pi * radius * radius;
    cout << "The area of circle = " << AreaOfCircle << endl;

    return 0;
}