#include"header.h"
void linkedlist::add_begin()
{
   DLL *node;
   node=new DLL;
   if(headptr!=nullptr)
   {
    node->next=headptr;
    headptr->prev=node;
   }
    headptr=node;
}
void linkedlist::print_node()
{
     DLL *ptr,*ptr1;
        ptr=headptr;
    if(headptr!=nullptr)
    {
    while(ptr)
    {
     cout<<ptr->rollno<<" "<<ptr->name<<" "<<ptr->marks<<endl;
     ptr1=ptr;
     ptr=ptr->next;
    }
    cout<<"*******************************************************"<<endl;
    while(ptr1)
    {
        cout<<ptr1->rollno<<" "<<ptr1->name<<" "<<ptr1->marks<<endl;
        ptr1=ptr1->prev;
    }
    }
    else
    {
        cout<<"no records found"<<endl;
    return;
    }
}

void linkedlist::add_end()
{
    DLL *node,*last;
    node=new DLL;
    if(headptr==nullptr)
        headptr=node;
    else
    {
        last=headptr;
        while(last->next!=nullptr)
        last=last->next;
        last->next=node;
        node->prev=last;
    }
}
