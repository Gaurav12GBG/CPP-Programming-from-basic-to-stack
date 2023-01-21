/* 

 */

#include<iostream>
using namespace std;
int main(){
           int age;
           cout<<"Tell me your age"<<endl;
           cin>> age;
           //1.Selection control structure :if else-if else ladder
           if((age < 18)&& (age>0)){
               cout<<"Your not eligible for voting "<<endl;

           }
           else if (age==18){
               cout<<"Your a current voter"<<endl;

           }
           else if(age<1){
               cout<<"Your not yet born "<<endl;

           }
           else
           cout<<"Your eligible for voting"<<endl;
    return 0;
}