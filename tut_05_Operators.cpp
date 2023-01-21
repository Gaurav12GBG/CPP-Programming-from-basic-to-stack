//Operator in c++

#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in c++ :" << endl;
    cout << "Following are the types of operators in c++" << endl;

    //Arithmatic Operator
    cout << "Arithmatic operators :" << endl;
    cout << "The value of a+b = " << a + b << endl;
    cout << "The value of a-b = " << a - b << endl;
    cout << "The value of a*b = " << a * b << endl;
    cout << "The value of a/b = " << a / b << endl;
    cout << "The value of a%b = " << a % b << endl;
    cout << "The value of a++ = " << a++ << endl;
    cout << "The value of a-- = " << a-- << endl;
    cout << "The value of ++a = " << ++a << endl;
    cout << "The value of --a =" << --a << endl;

    //Assignment operator
    // cout<<"Assignment operator :"<<endl;
    // int x = 3, b =2;)
    // char c = 'd';

    //Comparison operator
    cout << "\nComparison operator :" << endl;
    cout<<"The value of a==b" <<(a==b)<<endl;
    cout<<"The value of a!=b" <<(a!=b)<<endl;
    cout<<"The value of a<b" <<(a<b)<<endl;
    cout<<"The value of a>b" <<(a>b)<<endl;
    cout<<"The value of a<=b" <<(a<=b)<<endl;
    cout<<"The value of a>=b" <<(a>=b)<<endl;

    //Logical operator 
    cout<<"(a==b)&&(a>b)"<<((a==b)&&(a>b))<<endl;
    cout<<"(a==b)||(a<b)"<<((a==b)||(a<b))<<endl;
    cout<<"(!(a==b))"<<(!(a==b))<<endl;
   

    

    return 0;
}