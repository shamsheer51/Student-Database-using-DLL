#include<iostream>
using namespace std;
struct DLL
{
DLL *prev;
int rollno;
string name;
float marks;
DLL *next;
DLL(){
cout <<"enter rollno,name and marks"<<endl;
cin>>rollno>>name>>marks;
prev=next=0;
}
};
class linkedlist
{
    DLL *headptr;
public:
    linkedlist(){
        headptr=0;
    }
    void add_begin();
    void print_node();
    void add_end();
};
