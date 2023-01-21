/* Program Statement : Write a c++ program using switch control structure which 
                       takes day number and prints its day : Eg.If you input '1' 
                       o/p will be 'Monday', if input is '2' o/p will be 'Tuesday'.
 */

#include <iostream>
using namespace std;

int main()
{
    int ch;
    cout << "Enter the day number for knowing actual day of that number :" << endl;
    cin >> ch;

    switch (ch)

    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wedensday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "You entered invalid number, Please enter the number from 1 to 7 :" << endl;
        break;
    } // End of switch

    return 0;
} // End of main fun

/* 
OUTPUT :
Enter the day number for knowing actual day of that number :
1
Monday
 */