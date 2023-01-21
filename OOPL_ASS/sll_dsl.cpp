#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *head;

    node()
    {
        head = NULL;
    }
    node *createnode();
    void accept();
    void display();
    void search();
    void insert();
    void insert_end();
    void insert_mid();
    void delete_beg();
    void delete_after();
    void delete_end();
};
node *node ::createnode()
{
    node *newnode = new (node);
    {
        node *newnode = new (node);
        cout << "\n enter the data : ";
        cin >> newnode->data;
        newnode->next = NULL;
        return (newnode);
    }
}
void node ::display()
{
    node *temp;
    temp = head;
    cout << "[ ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "NULL";
    cout << " ]";
}
void node ::accept()
{
    node *temp;
    int i, n;
    cout << "How many nodes you want : " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        node *newnode = createnode();
        if (head == NULL)
            head = newnode;
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}
void node ::search()
{
    node *temp;
    int serno, flag;
    flag = 0;
    temp = head;
    cout << "\n which node you want to search : ";
    cin >> serno;
    while (temp != NULL)
    {
        if (serno == temp->data)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if (flag == 0)
    {
        cout << "number not found...\n";
    }
    else
    {
        cout << "number found ....\n";
    }
    display();
}

void node ::insert()
{
    node *newnode = createnode();
    newnode->next = head;
    head = newnode;
    cout << "\n node insert at beginning is : ";
    display();
}
void node ::insert_end()
{
    node *temp;
    node *newnode = createnode();
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    display();
}
void node ::insert_mid()
{
    node *head, *temp, *newnode;
    int srno;
    temp = head;
    cout << "\n after which node you want to insert new node : ";
    cin >> srno;
    while (temp->data != srno)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    cout << "\n insertion after : ";
    display();
}
void node::delete_beg()
{
    node *temp;
    temp = head;
    head = head->next;
    temp->next = NULL;
    delete (temp);
    display();
}
void node::delete_after()
{
    node *temp, *temp1, *temp2;
    int srno;
    temp = head;
    cout << "\n After which node you want to delete :";
    cin >> srno;

    while (temp->data != srno)
    {
        temp = temp->next;
    }
    temp1 = temp->next;
    temp2 = temp->next;
    temp1->next = NULL;
    delete (temp1);
    display();
}
void node ::delete_end()
{
    node *temp, *trav;
    temp = head;
    while (temp->next != NULL)
    {
        trav = temp;
        temp = temp->next;
    }
    trav->next = NULL;
    delete (temp);
    display();
}
int main()
{
    node n1, n2, n3, n4, n5, n6, n7, n8;
    int ch;

    do
    {
        cout << "n1.accept" << endl;
        cout << "n2.display" << endl;
        cout << "n3.insert" << endl;
        cout << "n4.insert_end" << endl;
        cout << "n5.insert_mid" << endl;
        cout << "n6.delete_beg" << endl;
        cout << "n7.delete_after" << endl;
        cout << "n8.delete_end" << endl;

        cout << "Please enter your choice :" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            n1.accept();
            break;

        case 2:
            n2.display();
            break;

        case 3:
            n3.insert();
            break;

        case 4:
            n4.insert_end();
            break;

        case 5:
            n5.insert_mid();
            break;

        case 6:
            n6.delete_beg();
            break;

        case 7:
            n7.delete_after();
            break;

        case 8:
            n8.delete_end();
            break;

        default:
            cout << "Invalid choice :" << endl;
            break;
        }

    } while (ch != 8);
    return 0;
}

/* 
OUTPUT :
n1.accept
n2.display
n3.insert
n4.insert_end
n5.insert_mid
n6.delete_beg
n7.delete_after
n8.delete_end
Please enter your choice :
1
How many nodes you want : 
2

 enter the data : 10

 enter the data : 20
n1.accept
n2.display
n3.insert
n4.insert_end
n5.insert_mid
n6.delete_beg
n7.delete_after
n8.delete_end
Please enter your choice :
2
[ NULL ]n1.accept
n2.display
n3.insert
n4.insert_end
n5.insert_mid
n6.delete_beg
n7.delete_after
n8.delete_end
Please enter your choice :
3

 enter the data : 30

 node insert at beginning is : [ 30 NULL ]n1.accept
n2.display
n3.insert
n4.insert_end
n5.insert_mid
n6.delete_beg
n7.delete_after
n8.delete_end
Please enter your choice :
4
enter the data : 40
 */