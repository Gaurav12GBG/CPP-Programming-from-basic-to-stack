#include<iostream>
#include<string>
using namespace std;
//OOP -> Classes and objects 
//C++ -> initially called --> C with classes by stroustroup
//class --> extensions of structures (in c)
//Structures had limitations 
//       - member are public 
//       - No methods 
//classes --> Can make few members as private & few as public 
//
//Nesting of member fuctions
class binary{

    private:
    string s;
    void chk_bin(void);

    public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number" <<endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for(int i = 0; i< s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}
void binary :: ones_compliment(void)
{
    for(int i = 0; i< s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        if(s.at(i)=='1'){
            s.at(i)=='0';
        }
    }
}
void binary :: display(void)
{
    cout<<"Displaying  your binary number "<<endl;
     for(int i = 0; i< s.length(); i++)
     {
         cout<< s.at(i);

     }
     cout<<endl;
    
}


int main(){
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();


    return 0;
}