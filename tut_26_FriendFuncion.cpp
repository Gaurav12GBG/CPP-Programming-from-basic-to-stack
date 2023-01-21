#include <iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i

/* 
Properties of friend function :- Not in the scope of class
                               - Since it is not in the scope of the class, so it cannot be called from object
                                 of that class   [c1.sumComplex() == Invalid] 
                               - can be invoked without the help of any object
                               - Usually contains object as arguments
                               - can be declare inside the private or public section of the class
                               - It cannot the access memebers directly by their names and need objects_name.
                                 member_name to access any member

*/

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Friend Function :- Allows to access to private and protected data
    // Below line means that non member - sumComlex function is allowed to do anything with my private members.
    friend Complex sumComplex(Complex o1, Complex o2); 

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}