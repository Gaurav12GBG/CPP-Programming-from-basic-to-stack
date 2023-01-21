#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a, int b = 9, int c = 10){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();
};

void Simple::printData(){
    cout<<"The value of the data1, data2 and data3 are "<<data1<<", "<<data2<<" and "<<data3<<" respectively."<<endl;
}

int main(){

    Simple s1(1, 4);
    s1.printData();

    Simple s2(1); // it takes default argument as second value if we are passing it
    s2.printData();
    return 0;
}