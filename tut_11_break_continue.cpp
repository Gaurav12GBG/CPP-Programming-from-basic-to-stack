/*
BREAK AND CONTINUE STATEMENT IN C++

1.BREAK STATEMENT => Break statement in loops are used to terminate the loop

2.CONTINUE STATEMENT => The continue statement only terminates the
                        current   iteration. 
 */

#include<iostream>
using namespace std;
          //Break statement  
int main(){
          for(int i = 0;i <40;i++){
              if(i==2){
                  break;
              }
              cout<<i<<endl;

          }

        //Continue statement 
        for(int i= 0;i <40;i++)
        {
            if(i==2){
                continue;
            }
            cout<<i<<endl;
        }
    return 0;
}