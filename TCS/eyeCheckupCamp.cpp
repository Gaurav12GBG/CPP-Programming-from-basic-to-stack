#include<iostream>
using namespace std;
int main(){

    int n;
    // cout << "Enter the number of people for registration : "<<endl;
    cin >> n;

    if(n<=10){
        int age, normal = 0, senior = 0, i;
        // cout<<"Please enter ur age : "<<endl;
        for(i=0; i<n; i++){
            cin >> age;
            if(age >= 10 && age <= 100 ){
                if(age >= 60 && senior < 5)
                    senior++;
                
                else if(age < = 60)
                    normal++; 
                
                else
                    normal++;
                
            }
            else{
                cout << "Invalid Input"<endl;
            }
        }
        cout <<"QUEUE1 TIME :"<<normal*15<<" mins"<<endl;
        cout <<"QUEUE2 TIME :"<<senior*15<<" mins"<<endl;
    }
    else
        cout << "Inlaid Input"<<endl;

        return 0;
}