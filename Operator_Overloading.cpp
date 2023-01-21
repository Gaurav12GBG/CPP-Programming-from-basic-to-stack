#include <iostream>
using namespace std;
class Student
{
public:
  virtual void show() = 0;
};

class Engineering : public Student
{
public:
  void show()
  {
    cout << "You are in Engineering class" << endl;
  }
};

class pharmacy : public Student
{
public:
  void show()
  {
    cout << "You are in Pharmacy Class " << endl;
  }
};

class Science : public Student
{
public:
  void show()
  {
    cout << "You are in Science Class " << endl;
  }
};

int main()
{
  Student *ptr[3];
  Engineering eng;
  pharmacy phar;
  Science sc;
  ptr[0] = &eng;
  ptr[1] = &phar;
  ptr[2] = &sc;
  int n;
  cout << "0-Engineering class  1-Pharmacy Class  2-Science class \n"
       << endl;
  cout << "Enter the index of the array : ";
  cin >> n;
  if (n >= 0 and n <= 3)
    ptr[n]->show();
  else
    cout << "Please enter the value between 0-2 " << endl;

  return 0;
}