
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char msg[100];
    cout<<"\n Data writing part.....!!!";
    cout<<"\n------------------------------------\n";
    fstream fout("Vaishnavi.txt",ios::out);
    fout<<"Hello everyone , My name is vaishnavi and i am from SNJB\n";
    fout.close();
    
    
    cout<<"\n Data reading part.....!!!";
    cout<<"\n -----------------------------------\n";
    fstream fin("Vaishnavi.txt",ios::in);
    fin.getline(msg , 100);
    fin.close();
    cout<<msg;
    return 0;
}



/* 
   OUTPUT :
            Data writing part.....!!!
            -----------------------------------

            Data reading part.....!!!
            -----------------------------------
            Hello everyone , My name is vaishnavi and i am from SNJB

*/

