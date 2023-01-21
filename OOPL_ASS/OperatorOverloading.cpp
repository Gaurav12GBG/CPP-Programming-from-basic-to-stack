#include<iostream>
using namespace std;

class complex
{
    public:
    int real;
    int imagnary;

    complex()
    {
        real = 0;
        imagnary = 0;
    }

    void accept()
    {
        cout<<"Enter the real part : "<<endl;
        cin>> real;

        cout<<"Enter the imagnary part : "<<endl;
        cin>> imagnary;
    }

    void display()
    {
        cout<< real << "+" << imagnary << "i" <<endl;
    }
    complex operator +(complex a)
    {
        complex temp;
        temp.real = real + a.real;
        temp.imagnary = imagnary + a.imagnary;
        return temp ;
    }

    complex operator *(complex a)
    {
        complex temp;
        temp.real = ((real*a.real)-(imagnary*a.imagnary));
        temp.imagnary = ((real*a.imagnary)+(imagnary*a.real));
        return temp;
    }
};

istream &operator >>(istream& is, complex& x){
    is >> x.real;
    is >> x.imagnary;
    return is;
}
ostream &operator <<(ostream& os, complex& x)
{
    os<<x.real <<"+"<< x.imagnary <<"i" << endl;
    return os;
}
int main(){
    complex object1 , object2 , object3 , object4, object5;
    cout<<"Enter the first complex number :"<<endl;
    object1.accept();

    cout<<"Enter the second complex number :"<<endl;
    object2.accept();

    cout<<"\n----------------------------------------------------\n";
    object1.display();
    object2.display();

    cout<<"\n----------------------------------------------------\n";
    cout<<"The Addition of the complex number is :";
    object3 = object1 + object2;
    object3.display();

    cout<<"\n-----------------------------------------------------\n";
    cout<<"The multiplication of the complex number is :";
    object4 = object1 * object2;
    object4.display();

    cout<<"\n-----------------------------------------------------\n";
    

    return 0;    
}


/* 
OUTPUT : 
Enter the first complex number :
Enter the real part : 
4
Enter the imagnary part : 
5
Enter the second complex number :
Enter the real part :
6
Enter the imagnary part : 
7

----------------------------------------------------
4+5i
6+7i

----------------------------------------------------
The Addition of the complex number is :10+12i

-----------------------------------------------------
The multiplication of the complex number is :-11+58i

-----------------------------------------------------
 */




 

