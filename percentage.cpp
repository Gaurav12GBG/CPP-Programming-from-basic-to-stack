#include<iostream>
using namespace std;

int main(){
    int totoalMark;
    float percentage;

    cout<<"Subject names are:\n 1.Marathi \n 2.Hindi \n 3.English \n 4.Science \n 5.Mathematics"<<endl;
    cout<<"Enter your total marks of above mentioned subjects out of 500"<<endl;
    cin>>totoalMark;

    percentage = totoalMark/5;
    
    cout<<"Congratulation !!!, You got a "<<percentage<<endl;

    return 0;
}