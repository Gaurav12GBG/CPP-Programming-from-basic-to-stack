#include <iostream>
using namespace std;
const int MAX = 10;
class Queue
{
    int data[MAX];
    int front, rear;

public:
    Queue()
    {
        front = rear = -1;
    }
    void enqueue(int);
    void dequeue();
    int isfull();
    int isEmpty();
    void display();
};
int Queue::isfull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}
int Queue::isEmpty()
{
    if (rear == -1)
        return 1;
    else
        return 0;
}
void Queue::enqueue(int ele)
{
    if (isfull())
    {
        cout << " can not add ! queue is full !" << endl;
    }
    else
    {
        if (rear == -1)
        {
            front++;
            data[++rear] = ele;
            cout << "Element added succesfully " << endl;
        }
        else
        {
            data[++rear] = ele;
            cout << "Element added succesfully" << endl;
        }
    }
}
void Queue::dequeue()
{
    int ele;
    if (isEmpty())
    {
        cout << "can not delete ! Queue is empty !" << endl;
    }
    else
    {
        ele = data[front];
        front++;
        cout << "Element removed succesfully " << endl;
    }
}
void Queue::display()
{
    if (isEmpty())
    {
        cout << " queue is empty !" << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
            cout << data[i] << " " << endl;
    }
}
int main()
{
    int ch, ele;
    Queue q;
    cout << "n1.add element" << endl;
    cout << "n2.removal element" << endl;
    cout << "n3.display element" << endl;
    cout << "n4.exit" << endl;

    do
    {
        cout << endl;
        cout << "Enter your choice :" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter element :" << endl;
            cin >> ele;
            q.enqueue(ele);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            cout << "Element in queue :" << endl;
            q.display();
            break;
        }

    } while (ch != 4);
    return 0;
}
/* 
OUTPUT :
n1.add element     
n2.removal element 
n3.display element 
n4.exit

Enter your choice :
1
Enter element :
5
Element added succesfully 

Enter your choice :
2
Element removed succesfully 

Enter your choice :
3
Element in queue :
 */
