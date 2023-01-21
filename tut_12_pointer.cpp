/* 
 POINTER IN CPP :

POINTER => It is a data type which holds the address of other data types. 
        => Syntax :
                   int b = 5;
                   int a* = &b;
        => Address of operator (&) :  Using & operator it gives only the
                                      address of variables.

        => Dereference operator (*) : Using * operator it gives only the
                                      value of variables.

*/

#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;

    // Address of operator (&)
    cout << "The address of a is : " << &a << endl;
    cout << "The address of a is : " << b << endl;

    // Dereference operator (*) : Value at
    cout << "The value at address b is : " << *b << endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is : " << &b << endl;
    cout << "The address of b is : " << c << endl;
    cout << "The value at address c is : " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is : " << **c << endl;

    return 0;
}