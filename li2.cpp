/*ordered linked list*/
#include<iostream>
using namespace std;
struct node{
  int no;
  string a;
  float b;
  node* link;
}*head=NULL,*temp,*prev;
void display();
int count()
{
  struct node *p;
  int cnt=0;
  p=head;
  while(p->link!=NULL)
  {
    cnt++;
  }
  return cnt+1;
}
void insert()
{
  struct node *p;
  int flag=0;

  temp=new node;
  cout<<"enter  no"<<endl;
  cin>>temp->no;
  cout<<"enter name"<<endl;
  cin>>temp->a;
  cout<<"enter  cgpa"<<endl;
  cin>>temp->b;
  temp->link=head;
  head=temp;  p=head;
  while(p->link!=NULL)
  {
    if(p->no>p->link->no)
    {
      int x=p->link->no;
      p->link->no=p->no;
      p->no=x;
      float y=p->link->b;
      p->link->b=p->b;
      p->b=y;
      string q=p->link->a;
      p->link->a=p->a;
      p->a=q;
    }

    p=p->link;
  }
 // display();

}
void search()
{
  cout<<"enter roll no u want to find:\n";
  int x;
  cin>>x;
  temp=head;
  while(temp->link!=NULL)
  {
    if(temp->no==x)
    {
        cout<<temp->no<<"  "<<temp->a<<"  "<<temp->b<<endl;
        return;
    }
    temp=temp->link;
  }
  if(x==temp->no)
  {
      cout<<temp->no<<"  "<<temp->a<<"  "<<temp->b<<endl;
      return;
  }
  else
  cout<<"not found...."<<endl;
  return;
}
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
    cout<<p->no<<"  "<<p->a<<"  "<<p->b<<endl;
    p=p->link;
  }
  cout<<p->no<<"  "<<p->a<<"  "<<p->b<<endl;
  return;
}
void del()
{
  node *p=head;
  int x,cnt=0;
  cout<<"enter index at which u wanna delete data"<<endl;
  cin>>x;

  while(p!=NULL)
  {
    p=p->link;
    cnt++;
  }
  if(x==0 && cnt==1)
  {
    head=NULL;
    return;
  }
  if(x==0)
  {
    head=head->link;
    return;
  }
  if(cnt-1<x)
  {
    cout<<"invalid choice"<<endl;
    return;
  }
  node *prev=NULL;
  p=head;
  //cnt=0;
  while(x--)
  {
    prev=p;
    p=p->link;
  }
  prev->link=p->link;
}
int main()
{
    temp= new node;
    cout<<"enter  no"<<endl;
    cin>>temp->no;
    cout<<"enter name"<<endl;
    cin>>temp->a;
    cout<<"enter  cgpa"<<endl;
    cin>>temp->b;

    temp->link=NULL;
    if(head==NULL)
    head=temp;

  int m=1,z,n;
  while(m)
  {
    cout<<"1)insert\n2)Display\n3)search\n4)Delete\n";
    cin>>z;
    switch(z)
    {
      case 1:
      {
        insert();
        break;
      }
      case 2:
      {
        display();
        break;
      }
      case 3:
      {
        search();
        break;
      }
      case 4:
      {
        del();
        break;
      }
    }
    cout<<"if u want to continue press 1....otherwise 0\n";
    cin>>m;
  }

}
