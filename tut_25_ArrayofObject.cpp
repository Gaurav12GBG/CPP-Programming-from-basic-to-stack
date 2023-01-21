#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary = 122;
        cout<<"Enter the id of Employee : "<<endl;
        cin>>id;
    }

    void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};



int main(){

    // Employee emp1, emp2, emp3;
    // emp1.setId();
    // emp1.getId();

    Employee wipro[15];
    for (int i = 0; i < 15; i++)
    {
    wipro[i].setId();
    wipro[i].getId();
    }
    
    return 0;
}