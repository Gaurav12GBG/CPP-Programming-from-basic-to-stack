#include<bits/stdc++.h>
using namespace std;

int main()

{

     int T;
     cin>>T;
     while(T--)

     {
        int A, B, C;
        cin>>A>>B>>C;

        if((A*A)+(B*B)==(C*C) || (A*A)+(C*C)==(B*B) || (B*B)+(C*C)==(A*A))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
             cout<<"No"<<endl;
        }
     }


    return 0;
}

