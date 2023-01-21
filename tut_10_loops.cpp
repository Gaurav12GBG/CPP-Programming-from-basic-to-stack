/* 
LOOPS IN CPP => There are three types of loops in cpp.

A] WHILE LOOP => Syntax : while(condition){
                                            expression
                                                      }


B] DO-WHILE LOOP => Syntax :do{
                               expression
                              }while(condition);


C] FOR LOOP => Syntax : for(initialization;condition;increment/decrement){
                                                expression

                              }


 */
#include <iostream>
using namespace std;

int main()
{
    int ch;
    int i = 0;

    cout << "Select loop to print i upto 5 :\n 1.Using while loop \n 2.using do-while loop \n 3.using for loop" << endl;
    cout << "Enter your choice" << endl;
    cin >> ch;

    if (ch == 1)
    {
        // using while loop
        cout << "using while loop :" << endl;
        cout << "The value of i is :" << endl;
        while (i < 6)
        {
            cout << i << endl;
            i = i + 1;
        }
    }
    else if (ch == 2)
    {
        //using do-while loop
        cout << "using do-while loop :" << endl;
        cout << "The value of i is :" << endl;
        do
        {
            cout << i << endl;
            i = i + 1;

        } while (i < 6);
    }
    else if (ch == 3)
    {
        //using for loop
        cout << "using for loop :" << endl;
        cout << "The value of i is :" << endl;
        for(i = 0;i<6;i++)
        {
            cout<<i<<endl;
        }

    return 0;
}
