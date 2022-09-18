#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
 struct myStack
 {
    node *head;
    int sz;
    myStack()
    {
        head=NULL;
        sz=0;
    }
    void push(int x)
    {
        node *temp=new node(x);
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop()
    {
        if(head==NULL)
        return INT16_MAX;
        int res=head->data;
        node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }
    int size()
    {
        return sz;
    }
    bool isempty()
    {
        return(head==NULL);
    }
    int peek()
    {
        if(head==NULL)
        return INT16_MAX;
        return head->data;
    }
 };
 int main()
 {
    myStack s;
    s.push(1);
    s.push(2);
    cout<<s.peek();
    return 0;
 }