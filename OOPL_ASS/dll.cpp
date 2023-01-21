#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *head;
    node*prev;
    node*trav;
    
   
    node()
    {
        head = NULL;
    }
    node *createnode();
    void accept();
    void display();
    void search();
    void insert_beg();
    void insert_end();
    void insert_mid();
    void delete_beg();
    void delete_end();
    void delete_after();
    
};
node *node :: createnode()
{
    node *newnode = new(node);
    {
        node *newnode = new(node);
        cout<<"\n enter the data :  ";
        cin>>newnode -> data;
        newnode->next = NULL;
        newnode->prev = NULL;
        return(newnode);
    }
}
void node :: display()
{
    node *temp;
    temp = head;
    cout<<"[ ";
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->next;
        cout<<" ";
    }
 
    //cout<<"NULL ]";
    cout<<" ]";
    cout<<"\n ";
}
void node :: accept()
{
    node *temp;
    int i,n;
    cout<<"How many nodes you want : "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        node *newnode = createnode();
        if(head == NULL)
           head = newnode;
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp= temp->next;
            }
            temp->next = newnode;
            newnode->prev = trav;
        }
    }
}    
void node :: search()
{
    node *temp;
    int serno,flag;
    flag = 0;
    temp = head;
    cout<<"\n\n which node you want to search : ";
    cin>>serno;
    while(temp!=NULL)
    {
        if(serno == temp->data)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
        
        
    }
    if(flag == 0)
    {
        cout<<"number not found...\n";
    }
    else
    {
        cout<<"number found ....\n";
    }
    display();
}

void node :: insert_beg()
{
    cout<<"\n\n insert at beginning.......";
    node *newnode = createnode();
    newnode ->next = head;
    head->prev = newnode;
    head = newnode;
    cout<<"node insert at beginning is : ";
    display();
    
}
void node :: insert_end()
{
    cout<<"\n\n insert at end .........";
    node *temp;
    node *newnode = createnode();
    temp =head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
        
    }
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = NULL;
    cout<<"insert at end : ";
    display();
}
void node :: insert_mid()
{
    cout<<"\n\n insert at middle ......";
    //node *newnode = createnode();
    
    node *head,*temp;
    int srno;
    node *newnode = createnode();
    
    temp = head;
    cout<<"\n after which node you want to insert new node : ";
    cin>>srno;
    while(temp->data != srno)
    {
        temp = temp->next;
        
    }
    newnode ->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    
    cout<<"\n insertion after : ";
    display();
}
void node :: delete_beg()
{
   node *temp;
   temp = head;
   head = head->next;
   temp->next = NULL;
   head->prev = NULL;
   delete(temp);
   display();
}
void node :: delete_after()
{
    node *temp,*temp1,*temp2;
    int srno;
    temp = head;
    cout<<"\n after which node you want to delete the node ..";
    cin>>srno;
    while(temp->data != srno)
    {
        temp = temp->next;
    }
    temp1 = temp->next;
    temp2 = temp->next ;
    temp1->next = NULL;
    delete(temp1);
    display();
    
}

void node :: delete_end()
{
    node *temp,*trav;
    temp = head;
    while(temp->next != NULL)
    {
        trav = temp;
        temp = temp->next;
        
    }
    trav->next = NULL;
    temp->prev = NULL;
    delete(temp);
    display();
}


//main function  starts ...................


int main()
{
    int ch;
    char ch1;
    node n1;
    do{
        cout<<"\n.............Menu..............."<<endl;
        cout<<"\n1.....create node "<<endl;
        cout<<"2.....display "<<endl;
        cout<<"3.....searching the element "<<endl;
        cout<<"4.....insert at beginning "<<endl;
        cout<<"5.....inesrt after "<<endl;
        cout<<"6.....insert at end "<<endl;
        cout<<"7.....delete at beginning"<<endl;
        cout<<"8.....delete after the node "<<endl;
        cout<<"9.....delete end node"<<endl;
        cout<<"\n Enter u r choice ";
        cin>>ch;
        switch(ch)
        {
            case 1 : n1.accept();
                     break;
            case 2 : n1.display();
                     break;
            case 3 : n1.search();
                     break;
            case 4 : n1.insert_beg();
                     break;
            case 5 : n1.insert_mid();
                     break;
            case 6 : n1.insert_end();
                     break;
            case 7 : n1.delete_beg();
                     break;

            case 8 : n1.delete_after();
                     break;
            case 9 : n1.delete_end();
                     break;
            default : cout<<"invalid choice ";
                      
        }
       char ch1;
       //cout<<"do you want to continue..."<<endl;
        //cin>>ch1;
    
    }while(ch!=8);
    return (0);
}
/*
OUTPUT:
.............Menu...............

1.....create node 
2.....display 
3.....searching the element     
4.....insert at beginning       
5.....inesrt after 
6.....insert at end 
7.....delete at beginning       
8.....delete after the node
9.....delete end node

 Enter u r choice 1
How many nodes you want : 
4

 enter the data :  10

 enter the data :  20

 enter the data :  30

 enter the data :  40

.............Menu...............

1.....create node
2.....display
3.....searching the element
4.....insert at beginning
5.....inesrt after
6.....insert at end
7.....delete at beginning
8.....delete after the node
9.....delete end node

 Enter u r choice 2
[ 10 20 30 40  ]

.............Menu...............

1.....create node
2.....display
3.....searching the element
4.....insert at beginning
5.....inesrt after
6.....insert at end
7.....delete at beginning
8.....delete after the node
9.....delete end node

 Enter u r choice 3


 which node you want to search : 20
number found ....
[ 10 20 30 40  ]

.............Menu...............

1.....create node
2.....display
3.....searching the element
4.....insert at beginning
5.....inesrt after
6.....insert at end
7.....delete at beginning
8.....delete after the node
9.....delete end node

 Enter u r choice 4


 insert at beginning.......
 enter the data :  50
node insert at beginning is : [ 50 10 20 30 40  ]

.............Menu...............

1.....create node
2.....display
3.....searching the element
4.....insert at beginning
5.....inesrt after
6.....insert at end
7.....delete at beginning
8.....delete after the node
9.....delete end node

 Enter u r choice 6


 insert at end .........
 enter the data :  70
insert at end : [ 50 10 20 30 40 70  ]

.............Menu...............

1.....create node
2.....display
3.....searching the element
4.....insert at beginning
5.....inesrt after
6.....insert at end
7.....delete at beginning
8.....delete after the node
9.....delete end node

 Enter u r choice 7
[ 10 20 30 40 70  ]

.............Menu...............

1.....create node
2.....display
3.....searching the element
4.....insert at beginning
5.....inesrt after
6.....insert at end
7.....delete at beginning
8.....delete after the node
9.....delete end node

 Enter u r choice 9
[ 10 20 30 40  ]

.............Menu...............

1.....create node
2.....display
3.....searching the element
4.....insert at beginning
5.....inesrt after
6.....insert at end
7.....delete at beginning
8.....delete after the node
9.....delete end node 
 */
