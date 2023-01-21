#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee(){}
};

/*
Derived class
class {{Derived-class-name}} : {{Visibility-Mode}} {{Base-class-name}}{
    class Members/varibles/Methods etc...
}
Notes :- Default visibility mode is private.
       - Public Visibity mode : Public member of the base class becomes public of the derived class
       - Private Visibility Mode : Public member of the base class becomes private member of the derived class
       - Private member are never inherited.
*/
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
};

int main()
{
    Employee obj1(1), obj2(2);
    cout << obj1.salary << endl;
    cout << obj2.salary << endl;

    return 0;
}