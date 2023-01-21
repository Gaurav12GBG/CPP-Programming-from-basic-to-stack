#include <iostream>
using namespace std;
class myInfo
{
public:
    void myself()
    {
        cout << " Vaishnavi Gangurde";
        cout << "\n I am in second year computer branxch of the engineering";
        cout << "\n 7378914638";
        cout << "\n I am live in chandwad";
        cout << "\n I am professional in c++ programming";
    }

    void country()
    {
        cout << "\n America";
    }
};
int main()
{

    myInfo obj;
    obj.myself();
    obj.country();
    return 0;
}
