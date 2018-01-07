#include<iostream>
using namespace std;
struct node{
  int no;

  node* link;
}*head=NULL,*temp,*prev;
void display();

void insert()
{
  struct node *p;
  int flag=0;

  temp=new node;
  cout<<"enter  no"<<endl;
  cin>>temp->no;
temp->link=NULL;
  if(head==NULL)
  {
    head=temp;
    return;
  }
  temp->link=head;
  head=temp;  p=head;
  while(p->link!=NULL)
  {
    if(p->no>=p->link->no)
    {
      int x=p->link->no;
      p->link->no=p->no;
      p->no=x;
    
    }

    p=p->link;
  }}
  void display()
  {
    struct node *p;
    p=head;
    if(head==NULL)
    {
      cout<<"link list is empty"<<endl;
      return;
    }
    while(p->link!=NULL)
    {
      cout<<p->no<<endl;
      p=p->link;
    }
    cout<<p->no<<endl;
    return;
  }
void dele()
{
   node * temp=head;
    while(temp->link!=NULL)
    {
        if(temp->no==temp->link->no)
        {
            
            temp->link=temp->link->link;
            //delete(t);
        }
        else
        {
            temp=temp->link;
        }
    }
    return;
}
  int main()
  {
    int ch;
  	cout<<"enter no of nodes\n";
  	cin>>ch;
  	while(ch--)
  	{
  		insert();
  	}
    display();
    dele();
    display();
  }
