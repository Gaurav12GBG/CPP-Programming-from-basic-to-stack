/* #include<iostream>
using namespace std;

int sum(float a, int b)
{
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

//Calculate the volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

//Calculate the volume of cube
int volume(int a)
{
    return (a * a * a);
}

//Rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The sum of 3 and 6 is" << sum(3, 6) << endl;
    cout << "The sum of 3, 7 and 6 is" << sum(3, 7, 6) << endl;
    cout << "The volume of cuboid of 3 , 7 and 6 is" << volume(3, 7, 6) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is" << volume(3) << endl;

    return 0;
}

 */


#include<iostream>
using namespace std;

class Demo
{
    public:
    void area(int r)
    {
        cout<<"The area of circle is :"<<(3.14*r*r)<<endl;

    }
    
    void area(int b, int h)
    {
        cout<<"The area of triangle :"<<(0.5*b*h)<<endl;
    }

    void area(int radius, int height, float pi)
    {
        cout<<"Area of cylinder :"<<(2*pi*radius*height) + (2*pi*radius*radius)<<endl;
    }

    void area(int length, float breadth)
    {
        cout<<"Area of rectangle is :"<<(length*breadth)<<endl;
    }
};

int main()
{
    Demo circle, triangle, cylinder, rectangle;
    circle.area(12);
    triangle.area(23,23);
    cylinder.area(5,10, 3.142);
    rectangle.area(15,12);
    return 0;
}

/*
OUTPUT :
The area of circle is :452.16
The area of triangle :264.5
Area of cylinder :471.3
The area of triangle :90        
*/