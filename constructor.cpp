#include <iostream>
#include <string.h>
using namespace std;

class Demo
{
public:
    int a, b;

    // default constructor - It has no parameter
    Demo()
    {
        a = 10;
        b = 20;

        cout << "\ndefault constructor :" << endl;
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    }

   /*  // parameterised constructor - it has a parameter
    Demo(int x, int y)
    {
        a = x;
        b = y;

        cout << "\nparameterised constructor :" << endl;
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    }

    // copy constructor - copy the value of one object to another object
    Demo(Demo *t)
    {
        a = t->a;
        b = t->b;

        cout << "\ncopy constructor :" << endl;
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    } */

    // Destructor - Instance member fuction which is invoked automatically before an object is destroyed.
    //Syntax : ~ constructor-name();
    //Example : 
    ~Demo()
    {
        a = 25;
        b = 75;

        cout << "\nDestructor :" << endl;
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    }
};

int main()
{
    Demo obj1;
    /* Demo obj2(52, 23);
    Demo obj3(&obj1); */

    return 0;
}

 //Constructor with destructor program
 #include<iostream>
 using namespace std;

 class constructorWithdestructor
 {
     public:
     int a , int b;
     constructorWithdestructor()
     {
         a = 10;
         b = 20;
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
         
     }
     ~constructorWithdestructor()

     {
         a = 25;
         b = 30;
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;

     }
 };
 int main(){
     constructorWithdestructor obj;
     return 0;
 }

