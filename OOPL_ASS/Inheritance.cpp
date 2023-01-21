#include <iostream>
#include <string>
using namespace std;
class Publication
{

public:
    string title;
    float price;

    void accept()
    {
        cout << "Enter the title : " << endl;
        cin >> title;
        cout << "Enter the price : " << endl;
        cin >> price;
    }

    void show()
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
};

class Book : public Publication
{
public:
    int page_count;

    void accept()
    {
        Publication::accept();
        cout << "Enter the number of pages : " << endl;
        cin >> page_count;
    }

    void show()
    {
        Publication::show();
        cout << "Page Count : " << page_count << endl;
    }
};

class Tape : public Publication
{

public:
    float play_time;

    void accept()
    {
        Publication::accept();
        cout << "Enter the playing time in minutes : " << endl;
        cin >> play_time;
    }

    void show()
    {
        Publication::show();
        cout << "Play Time : " << play_time << endl;
    }
};

int main()
{
    Book obj;
    cout << "\nBook Class Details : " << endl;
    obj.accept();

    cout << "----------------------" << endl;
    obj.show();
    cout << "----------------------" << endl;

    cout << "\nTape Class Deatils : " << endl;
    Tape obj2;
    obj2.accept();

    cout << "----------------------" << endl;
    obj2.show();
    cout << "----------------------" << endl;

    return 0;
}

/* 
OUTPUT :
Book Class Details : 
Enter the title :    
OOP
Enter the price : 
219
Enter the number of pages : 
455
----------------------
Title : OOP
Price : 219
Page Count : 455      
----------------------

Tape Class Deatils :  
Enter the title :     
C++
Enter the price : 
277
Enter the playing time in minutes : 
841
----------------------
Title : C++
Price : 277
Play Time : 841
----------------------
 */
