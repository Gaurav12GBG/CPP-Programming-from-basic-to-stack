#include<iostream>
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
    
};
node *node :: createnode()
{
    node *newnode = new(node);
    {
        node *newnode = new(node);
        cout<<"\n enter the data : ";
        cin>>newnode -> data;
        newnode->next = NULL;
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
        cout<<temp->data<<" ";
        temp = temp->next;
    }
 
    cout<<"NULL";
    cout<<" ]";
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
        }
    }
}    
void node :: search()
{
    node *temp;
    int serno,flag;
    flag = 0;
    temp = head;
    cout<<"\n which node you want to search : ";
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

void node :: insert()
{
    node *newnode = createnode();
    newnode ->next = head;
    head = newnode;
    cout<<"\n node insert at beginning is : ";
    display();
    
}
void node :: insert_end()
{
    node *temp;
    node *newnode = createnode();
    temp =head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
        
    }
    temp->next = newnode;
    display();
}
void node :: insert_mid()
{
    node *head,*temp,*newnode;
    int srno;
    temp = head;
    cout<<"\n after which node you want to insert new node : ";
    cin>>srno;
    while(temp->data != srno)
    {
        temp = temp ->next;
        
    }
    newnode ->next = temp->next;
    temp->next = newnode;
    cout<<"\n insertion after : ";
    display();
}
int main()
{
    node n1,n2,n3,n4,n5;
    int ch;
    
    do
    {
        cout<<"n1.createnode"<<endl;
        cout<<"n2.display"<<endl;
        cout<<"n3.insert"<<endl;
        cout<<"n4.insert_end"<<endl;
        cout<<"n5.insert_mid"<<endl;
        cout<<"Please enter your choice ";
        cin>>ch;
        
        switch(ch)
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
                  
            default:
                  cout<<"Invalid choice :"<<endl;
                  break;
        }
        
    }while(ch!=6);
    return 0;

  
}







