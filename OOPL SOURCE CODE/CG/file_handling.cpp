#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("Vaishu.txt");
    
    fout<<"******Biodata******"<<endl;
    fout<<"Name : Vaishnavi Gangurde"<<endl;
    fout<<"Date of Birth : 24 july 2002"<<endl;
    fout<<"Address : Dugaon"<<endl;
    fout<<"Mobile number : 7378914638"<<endl;
    fout<<"Blood group : O +ve"<<endl;
    fout.close();
    return 0;
}