#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base : "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
     public:
        int var_derived;
        void display(){
            cout<<"Displaying derived class variable var_derived : "<<var_derived<<endl;
        }
};

int main(){

    BaseClass * baseClass_pointer;
    DerivedClass * deriveClass_pointer;

    BaseClass obj_base;
    DerivedClass obj_derived;

    baseClass_pointer = &obj_derived;  // pointing the base class pointer to derived class
    deriveClass_pointer = &obj_base;   // pointing the derived class pointer to base class

    baseClass_pointer->var_base = 34;
    baseClass_pointer->display();

    deriveClass_pointer->var_derived = 134;
    deriveClass_pointer->display();

    return 0;
}