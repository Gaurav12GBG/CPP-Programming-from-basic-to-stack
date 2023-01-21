/* 
 */

#include <iostream>
using namespace std;
int sum(int a, int b)
{

    int c = a + b;
    return c;
}
//This will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//Call by reference using pointer
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Call by reference using c++ reference variable int &
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    //return a;
}

int main()
{
    int x = 4, y = 5;
    //cout<<"The sum of 4 and 5 is"<<sum(a,b);
    cout << "The value of x is " << x << "and the y is" << y << endl;

    //swap(x,y); //This will not swap a and b
    //swapPonter(&x, &y); // this will swap a and b using pointer reference variables
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    //swapReferenceVar(x,y)=766; //This will swap a and b using reference variables

    cout << "The value of x is" << x << "and the value of y is" << y << endl;

    return 0;
}