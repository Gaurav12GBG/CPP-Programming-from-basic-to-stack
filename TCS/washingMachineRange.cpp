#include<iostream>
using namespace std;
int main(){

    int weight;
    cout <<"Enter the weight : "<<endl;
    cin >> weight;

    if(weight < 0){
        cout << "Invalid input"<<endl;
    }
    else if(weight > 0 && weight <= 2000){
        cout << "Time Estimated : 25 min "<<endl;
    }
    else if(weight >= 2001 && weight <= 4000){
        cout << "Time Estimated : 35 min "<<endl;
    }
    else if(weight >= 4001 && weight <=7000){
        cout << "Time Estimated : 45 min "<<endl;
    }
    else{
        cout << "Overloaded"<<endl;
    }

    return 0;
}