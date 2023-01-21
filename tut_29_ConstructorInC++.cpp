#include <iostream>
using namespace std;

class Complex
{
  int a, b;

public:
 
  Complex(void); //Constructor declaration

  void printData(){
    cout<<a<<" + "<<b<<"i"<<endl;
  }
};

Complex::Complex(void) // ----> This is default constructor :- Takes no parameter
{
  a = 10;
  b = 10;
}

int main()
{
  Complex c;
  c.printData();
  return 0;
}

/* 
Constructor:
  -constructor is the special member function with same name as of the class.
  -It is automatically invoked whenever an object is created.
  -It is used to initialized the object of its class.

Characteristics :- It should be declare in the public section of the class.
                 - They are automatically invoked whenever the object is created.
                 - They cannot reurn values and do not have return types.
                 - It can have default arguments.
                 - We cannot refer to the address.

 */