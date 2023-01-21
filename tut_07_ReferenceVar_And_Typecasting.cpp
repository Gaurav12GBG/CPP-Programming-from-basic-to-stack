/* 
SCOPE RESOLUTION OPERATOR, REFERANCE VARIABLES AND TYPE CASTING :

1. SCOPE RESOLUTION OPERATOR (::) => To access the value of global variable 
                                     we use scope resolution operator.

2. LITERALS => The decimal value defaulty represent double data types      
               eg.1.26

3.TO CHECK THE SIZE OF DATA TYPES => We can use sizeof()function.

4.REFERANCE VARIABLES(&) => Reference variable can be defined as another
                            name for an already existing variable .this are called as "ALIAS".
                            Symbol to declare referance variable (&).

5.TYPE CASTING => Type casting means we can change 
                  type of data types.                         

*/

//Scope resolution operator(::)
#include<iostream>
using namespace std;
          int c = 45; //global variable
int main(){

          int c = 60; //local variable 
          cout<<"local variable c="<<c<<endl;
          cout<<"global  variable c="<<::c<<endl;

    


// Float, Double & long double literals 

     float a = 1.26f;
     long double b = 1.26l         ;

     cout<<"The float value is"<<a<<endl;
     cout<<"The long double value is"<<b<<endl;


//To check size of data types 

          
          float g =3.14;
          int d =9;

          cout<<"The value of c is "<<sizeof(g)<<endl;
          cout<<"The value of d is "<<sizeof(d)<<endl;

//Reference variable 

        int x = 10;
        int &y = x;

        cout<<x<<endl;
        cout<<y<<endl;
   


//Type casting 

          int p = 10;
          float q = 20.5;

          cout<<"The value of a+b= "<< p+q <<endl;
          cout<<"The value of a+b= "<< p+float(q) <<endl;
          cout<<"The value of a+b= "<< p+(float)q <<endl;

}

