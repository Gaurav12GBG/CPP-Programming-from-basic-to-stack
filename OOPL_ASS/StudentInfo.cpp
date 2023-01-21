
#include <iostream>
#include <string.h>
using namespace std;

class studInfo
{
private:
    static int object_count;

public:
    // Creation of variables
    char name[20];
    int rollNo;
    char className[3];
    char division[3];
    char DOB[20];
    char bloodGroup[3];
    char contactAddress[20];
    char telephoneNo[20];
    char drivingLicenceNo[20];

    // Creation of default constructor
    studInfo()
    {

        rollNo = 1;
        strcpy(name, "vaishu");
        strcpy(className, "TE");
        strcpy(division, "A");
        strcpy(DOB, "1/08/2002");
        strcpy(bloodGroup, "A+");
        strcpy(contactAddress, "Dugaon");
        strcpy(telephoneNo, "1245");
        strcpy(drivingLicenceNo, "7896");
    }

    // Creation of copy constructor
    studInfo(studInfo *t)
    {
        rollNo = t->rollNo;
        strcpy(name, t->name);
        strcpy(className, t->className);
        strcpy(division, t->division);
        strcpy(DOB, t->DOB);
        strcpy(bloodGroup, t->bloodGroup);
        strcpy(contactAddress, t->contactAddress);
        strcpy(telephoneNo, t->telephoneNo);
        strcpy(drivingLicenceNo, t->drivingLicenceNo);
    }

    // Creation of data members
    void accept()
    {
        cout << "\nAdd Student Record Here:" << endl;
        cout << "========================================" << endl;

        cout << "Enter the name of the student:" << endl;
        cin >> name;

        cout << "Enter the roll no:" << endl;
        cin >> rollNo;

        cout << "Enter the class:" << endl;
        cin >> className;

        cout << "Enter the division:" << endl;
        cin >> division;

        cout << "Enter the DOB:" << endl;
        cin >> DOB;

        cout << "Enter the blood group:" << endl;
        cin >> bloodGroup;

        cout << "Enter the contact address:" << endl;
        cin >> contactAddress;

        cout << "Enter the telephone no:" << endl;
        cin >> telephoneNo;

        cout << "Enter the driving licence no:" << endl;
        cin >> drivingLicenceNo;

        cout << "========================================" << endl;
    }

    void display()
    {
        cout << "\nStudent Records:" << endl;
        cout << "========================================" << endl;
        cout << "Name of student : " << name << endl;
        cout << "        Roll No : " << rollNo << endl;
        cout << "          Class : " << className << endl;
        cout << "       Division : " << division << endl;
        cout << "            DOB : " << DOB << endl;
        cout << "    Blood Group : " << bloodGroup << endl;
        cout << "Contact Address : " << contactAddress << endl;
        cout << "   Telephone No : " << telephoneNo << endl;
        cout << "DrivingLicenceNo: " << drivingLicenceNo << endl;
        cout << "========================================" << endl;
    }

    static void count()
    {
        cout << "Total objects are :" << object_count << endl;
    }
};

int studInfo::object_count = 0;

int main()
{
    studInfo obj1, obj2;
    obj2.accept();
    studInfo obj3(obj2);
    obj1.display();
    obj2.display();
    obj3.display();

    studInfo::count();

    return 0;
}

/* 
OUTPUT :
Add Student Record Here:
========================================
Enter the name of the student:
Vaishnavi
Enter the roll no:
25
Enter the class:
SE
Enter the division:
A
Enter the DOB:
24/07/2002
Enter the blood group:
O+
Enter the contact address:
Chandwad
Enter the telephone no:
7378914638
Enter the driving licence no:
2556
========================================

Student Records:
========================================
Name of student : vaishu
        Roll No : 1
          Class : TE
       Division : A
            DOB : 1/08/2002
    Blood Group : A+
Contact Address : Dugaon
   Telephone No : 1245
DrivingLicenceNo: 7896
========================================

Student Records:
========================================
Name of student : Vaishnavi
        Roll No : 25
          Class : SE
       Division : A
            DOB : 24/07/2002
    Blood Group : O+
Contact Address : Chandwad
   Telephone No : 7378914638
DrivingLicenceNo: 2556
========================================

Student Records:
========================================
Name of student : Vaishnavi
        Roll No : 25
          Class : SE
       Division : A
            DOB : 24/07/2002
    Blood Group : O+
Contact Address : Chandwad
   Telephone No : 7378914638
DrivingLicenceNo: 2556
========================================
Total objects are :0

*/
