#include"header.h"
int main()
{
    int op;
    linkedlist obj;
    while(1)
    {
    cout<<"select the option "<<endl<<"1)add_begin " <<endl<< "2)print_node "<<endl<< "3)add_end "<<endl<<"4)exit "<<endl;
    cin>>op;
    switch(op)
    {
        case 1:obj.add_begin();break;
        case 2:obj.print_node();break;
        case 3:obj.add_end();break;
        case 4:exit(0);
        default :cout<<"unknown option"<<endl;
    }
    }
}

