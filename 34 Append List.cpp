#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head = NULL;

// INSERT AT BEGINING
void insertBegin(int value)
{
    Node* newnode = new Node;
    newnode -> data = value;
    newnode->next=head;
    head = newnode;
}

// APPEND AT END
void append(int value)
{
    Node* newnode = new Node;
    newnode -> data = value;
    newnode -> next = NULL;

    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL)
    temp = temp -> next;

    temp -> next = newnode;
}

// DISPLAY
void display()
{
Node* temp = head;
cout<<"/n linked list:";

while(temp != NULL)
{
    cout<<temp -> data <<"->";
    temp = temp -> next;
}
cout<<"NULL/n";
}
int main()
{
    int choice, value;

    while(true)
    {
        cout<<"\n1.insert at begining:";
        cout<<"\n2.append at end:";
        cout<<"\n3.display";
        cout<<"\n4.exit"<<endl;

        cout<<"enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"enter value:";
            cin>>value;
            insertBegin(value);
            break;

            case 2:
            cout<<"enter value:";
            cin>>value;
            append(value);
            break;

            case 3:
            display();
            break;

            case 4:
            return 0;

            default:
            cout<<"invalid choice!";
        }
    }
}
