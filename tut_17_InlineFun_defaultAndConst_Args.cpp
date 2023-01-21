 /*
 INLINE FUNCTION : When the inline function is called whole code of the
                   inline fuction gets inserted or substituted at the of
                   the inline function call.
*/
#include<iostream>
using namespace std;
class student
{
    private:
    int rollNo;
    float fees;

    public:
    
        void displaystudent();
        void setrollNo()
        {
            cout<<"Enter student data :"<<endl;
            cin>> rollNo >> fees;
        }

    };
    inline void student::displaystudent()
    {
        cout<<"rollNo : "<<rollNo<<endl;
        cout<<"fees : "<<fees<<endl;

    }
    int main()
    {
        student s1 , s2;
        s1.setrollNo();
        s1.displaystudent();

        s2.setrollNo();
        s2.displaystudent();
        return 0;
    }
    
    
    
int main(){

    return 0;
}




// #include<iostream>
// using namespace std;
//     inline int product(int a, int b){
//         // Not recommended to use below lines with inline functions
//         // static int c = 0; //this exicutes only once
//         // c= c+1; //Next time this fuction is run, the value of c will be retained
//         return a*b;
//     }

//     float moneyReceived(int currentmoney , float factor = 1.04)
//     {
//         return currentmoney * factor;
//     }

//     //int strlen(const char *p){

//     //}
// int main(){
//      int a, b;

//      //cout<<"Enter the value of a and b"<<endl;
//      //cin>>a>>b;
//      //cout<<"The product of a and b is"<<product(a,b)<<endl;

//      int money = 100000;
//      cout<<"If you have "<<"Rs in ypur bank account,you will receive"<<moneyReceived(money)
//      <<"Rs after 1 year "<<endl;
//      cout<<"For VIP : If you have "<<money<<"Rs in your bank account ,you will receive"
//      <<moneyReceived(money, 1.1)<<"Rs after 1 year"<<endl;
      

//     return 0;
// }