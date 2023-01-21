#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream fout;
    fout.open("vaishnavi.txt", ios::out);
    if(!fout){
        cout<<"Error ! While creating the file...."<<endl;
    }
    else{
        cout<<"File created successfully !!!"<<endl;
        fout<<"\n STUDENT BIODATA :";
        fout<<"\n-------------------------------------------------------------------------------------";
        fout<<"\n    Name : Vaishnavi Bharat Gangurde";
        fout<<"\n EmailId : vaishnavigangurde100@gmail.com";
        fout<<"\n Contact : Vaishnavi Bharat Gangurde";
        
        fout<<"\n-------------------------------------------------------------------------------------";
        fout<<"\n CAREER OBJECTIVE :";
        fout<<"\n To work in high grown organisation with a competative and challenging environment that creates an ideal condition for delivering high quality services";

        fout<<"\n-------------------------------------------------------------------------------------";
        fout<<"\n SKILLS :";
        fout<<"\n Programming : \n 1.Python Programming \n 2.C Language \n 3.C++ Programming";
        fout<<"\n Critical thinking : Making a perfect decision ";

        fout<<"\n-------------------------------------------------------------------------------------";
        fout<<"\n PROJECTS :";
        fout<<"\n FE - Attendance monitoring using face and voice recognition system ";
        fout<<"\n Name : Vaishnavi Bharat Gangurde";

        fout<<"\n-------------------------------------------------------------------------------------";
        fout<<"\n EDUCATION :";
        fout<<"\n COURSE        SCHOOL NAME                   PERCENTAGE/CGPA         PASSING YEAR";
        fout<<"-------------------------------------------------------------------------------------";
        fout<<"\n SE COMP   SNJB KBJ COE CHANDWAD         9.43(Avg of previous year)   Pursuing";
        fout<<"\n HSC       SPD SURANA COLLEGE CHANDWAD   73.38%                       2020";
        fout<<"\n SSC       M.P HIGHSCHOOL DUGAON         89.40%                       2018";
        fout<<"-------------------------------------------------------------------------------------";

        fout<<"\n AREA OF INTEREST : \n 1.Programming \n 2.Marketing \n 3.Learning new things";

        fout<<"\n-------------------------------------------------------------------------------------";
        fout<<"\n HOBBIES : \n 1.Cooking \n 2.Listening music \n 3.Drawing ";

        fout<<"\n-------------------------------------------------------------------------------------";
        fout<<"\n PERSONAL DETAILS :";
        fout<<"\n       Address : At post Dugaon Tal-Chandwad Dist-Nashik";
        fout<<"\n Date of birth : 24/07/2002";
        fout<<"\n        Gender : Female";
        fout<<"\n   Nationality : Indian";
        fout<<"\nLanguage Known : Marathi, Hindi, English";

        fout<<"\n-------------------------------------------------------------------------------------";
        fout<<"\n DECLARATION :";
        fout<<"\n I hereby declare that all the above information is true to best of my knowledge";
        fout<<"\n-------------------------------------------------------------------------------------";

   }
    return 0;
}