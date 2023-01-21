#include <iostream>
#include <limits>
using namespace std;

template<typename T>

T selection_sort()
{
    T a[10];
    T temp;
    for (int i = 0; i < 10; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\n";
    }
}
int main()
{
    cout << "...Integer sorting...\n";
    selection_sort<int>();

    cout << "...Floating sorting...\n";
    selection_sort<float>();
}

/* 
  OUTPUT:
         ...Integer sorting...
            a[0]=10
            a[1]=25    
            a[2]=5
            a[3]=85
            a[4]=63
            a[5]=75
            a[6]=84
            a[7]=20
            a[8]=60
            a[9]=55
        -----------------------------------    
             5
            10
            20
            25
            55
            60
            63
            75
            84
            85
        ------------------------------------   
        ...Floating sorting...
           a[0]=10.2
           a[1]=20.20
           a[2]=25.25
           a[3]=63.23
           a[4]=1.25
           a[5]=85.2
           a[6]=96.47
           a[7]=54.7
           a[8]=50.50
           a[9]=25.45
        -------------------------------------   
           1.25
           10.2
           20.2
           25.25
           25.45
           50.5
           54.7
           63.23
           85.2
           96.47
 */
