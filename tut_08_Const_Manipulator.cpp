/*  
CONSTANT & MANIPULATORS IN C++ 

1.CONSTANT => Constant are unchangeable when a constant variable is 
              initialized in a progam , its value cannot be changed afterwards.

2.MANIPULATORS => Manipulators are used in the formatting of output.
                  The two most commonly manipulators are 'endl'& 'setw'.
                  a.'endl' is used for next line
                  b.'setw'is used to specify the width of the output.

3.OPERATOR PRESEDENCE => Operator precedence helps us to solve an
                         expression.
                         a.Multiplication
                         b.division
                         C.Addtion
                         d.Substraction 


*/
// Constant in c++
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    //const int a = 3;
    //cout<<"The value of a was :"<<a<<endl;

    //a = 45; not allowed beacause a is an constant
    //cout<<"The value of a is :"<<a<<endl;

    //Manipulators in c++
    int a = 3, b = 75, c = 1522;
    cout << "The value of a without setw is :" << a << endl;
    cout << "The value of b without setw is :" << b << endl;
    cout << "The value of c without setw is :" << c << endl;

    //with setw
    cout << "The value of a is with setw is : " << setw(4) << a << endl;
    cout << "The value of b is with setw is : " << setw(4) << b << endl;
    cout << "The value of c is with setw is : " << setw(4) << c << endl;

    //Operator precedence
    int p = 4, q = 5;
    int r = (((p * 4) + q) - 78) + 45;
    cout << r;

    return 0;
}
