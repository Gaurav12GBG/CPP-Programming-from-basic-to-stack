// Scope of variables and data types:

/*
1. Scope of variables :- A scope of a variable is the region in code where the 
                         existance  of the code valid.
                        - Based on the code we have local and global variable in 
                          c++.
                        - A) Local Variable => Local variable are declared inside 
                                               the braces of any function and can be access only from there.
                          B) Golbal Variable => Global variable are declared outside
                                               any function and can be accessed from anywhere.
                        
2. Data Types :- data type define the type of data a variable can hold .
               - For example an integer variable can hold integer data, Character
                 type variable can hold character data etc.
               - Data types are characterized into three groups ,
                 A) Built in => int, folat, char, double, bool.
                 B) User defined => struct, union, enum. 
                 c) Derived => Array, function, pointer.                     

*/

#include <iostream>
using namespace std;
int glo = 15; //global variable
int main()
{
  int glo = 30; // Local variable
  cout << "The value of the local variable is :" << glo << endl;

  //We can access the global variable using scope resolution operator(::).
  cout << "The value of the global variable is :" << ::glo << endl;

  return 0;
}
