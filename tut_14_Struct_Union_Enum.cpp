/* 
STRUCTURE, UNION AND ENUM =>

A] STRUCTURE => Structure are used to combine different types of data types
                ,just like an array is used to combine the same types of data types.



B] UNION => Unions use shared memory so only 1 variable can be used at a
            time.



C] ENUM => Enumration are consist of integral constants.


 */

//Program statement :write a c++ program to store information (name, roll and marks)of a student using structure and Display store information

// #include <iostream>
// using namespace std;

//  struct student
//  {
//     string name;
//     int rollNo;
//     float marks ;

// };

        



//  int main()

//  {
//      student s;
//      cout<<"Enter information :"<<endl;
//      cout<<"Enter your name"<<endl;
//      cin>> s.name;

//      cout<<"Enter your rollNo"<<endl;
//      cin>> s.rollNo
//      cout<<"Enter your marks"<<endl;
//      cin>> s.marks;

//      cout<<"Enter displaying information :"<<endl;
//      cout<<"name :"<<s.name<<endl;
//      cout<<"rollNo :"<<s.rollNo<<endl;
//      cout<<"marks :"<<s.marks<<endl;

//union
/* union student
{
    char name[20];
    int rollNo;
    float marks;
};

int main()
{

    student s;
    cout << "Enter information :" << endl;
    cout << "Enter your name" << endl;
    cin >> s.name;
    cout << "name :" << s.name << endl;

    cout << "Enter your rollNo" << endl;
    cin >> s.rollNo;
    cout << "rollNo :" << s.rollNo << endl;

    cout << "Enter your marks" << endl;
    cin >> s.marks;
    cout << "marks :" << s.marks << endl;
     return 0;
} */

//Enumration
// enum week{Sun, Mon,Tue, Wed,Thurs,fri, sat};

// int main()
// {
//     week today;
//     today = Wed;
//     cout<<"Day"<< today+1<<endl;
//     return 0;

// }

//Class program
#include<iostream>
using namespace std;
class person
{
    private:
    string name;
    int age;
    char gender;

    public:
    void input()
    {
        cout<<"Enter the name is "<<endl;
        cin>> name;
        cout<<"Enter the age is "<<endl;
        cin>> age;
        cout<<"Enter the gender is "<<endl;
        cin>> gender;

    }
    void output()
    {
        cout<<"name is :"<<name<<endl;
        cout<<"age is :"<<age<<endl;
        cout<<"gender is :"<<gender<<endl;
    }
};
     int main()
     {
         person p1;
         p1.input();
         p1.output();
         return 0;
     }























  
   