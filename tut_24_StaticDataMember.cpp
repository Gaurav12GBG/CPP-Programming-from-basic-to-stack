/* 
 */

#include<iostream>
using namespace std;
class employee
{
    int id ;
    string name ;

    public:
    static int count;
    void input();
    void output();

}; //class close
int employee::count = 0;
void employee::input()

{
    cout<<"Enter your id :"<<endl;
    cin>> id;
    cout<<"Enter your name :"<<endl;
    cin>> name;
}
void employee::output()
{
    cout<<"id is : "<<id<<endl;
    cout<<"name is : "<<name<<endl;

}
int main()
{
    employee e1,e2;

    e1.input();
    e1.output();

    cout<<"Total number of objects "<<employee::count;
    cout<<"employee details :"<<endl;

    e2.input();
    e2.output();
    return 0;
}


int main(){

    return 0;
}