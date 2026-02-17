// Singly Linked List (Insert, Delete, Display).

#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
} *start=NULL;

void insert(int x){
    node *p = new node;
    p->data = x;
    p->next = start;
    start = p;
}

void del(){
    if(start==NULL) cout<<"Empty";
    else{
        node *p = start;
        start = start->next;
        delete p;
    }
}

void display(){
    node *p = start;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main(){
    int ch, x;
    while(1){
        cout<<"\n1.Insert 2.Delete 3.Display 4.Exit: ";
        cin>>ch;
        switch(ch){
            case 1: cin>>x; insert(x); break;
            case 2: del(); break;
            case 3: display(); break;
            case 4: exit(0);
        }
    }
}
