#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(void){ // ---> Default Constructor :- Accepts no arguments
            a = 10;
            b = 12;
        }

        Complex(int x, int y){ // ---> Parameterized Constructor :- Accepts arguments
            a = x;
            b = y;
        }


        void printData(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    //Implicit Call
    Complex c(3, 4);
    c.printData();

    //Explicit Call
    Complex c1 = Complex(5, 6);
    c1.printData();
    return 0;
}