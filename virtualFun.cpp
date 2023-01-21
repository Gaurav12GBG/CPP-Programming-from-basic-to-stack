#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "Displaying base class variable var_base" << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying derived class variable var_derived" << var_derived << endl;
    }
};

/* 
Virtual Function :
                A member function in the base class which is declared using the virtual keyword.
                In java virtual keyword is not used to define the virtual function instance method in java is considered as virtual function.
                It overrides the default behaviours.
 */

int main()
{
    BaseClass * baseClass_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    baseClass_pointer = &obj_derived;
    baseClass_pointer->display();

    return 0;
}