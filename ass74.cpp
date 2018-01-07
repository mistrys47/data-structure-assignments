#include<bits/stdc++.h>
using namespace std;
struct node{
  int no;

  node* link;
}*head=NULL;
node *head1,*head2;
void ins()
{
	node *tmp=new node;
	cout<<"enter  no"<<endl;
  cin>>tmp->no;
  tmp->link=NULL;
  node *temp=head;
  if(head==NULL)
  {
  	head=tmp;
  	return;
  }
  else
  {
  	while(temp->link!=NULL)
    {
      temp=temp->link;
    }
  	temp->link=tmp;
  }
}
void disp(node *h)
{
  struct node *p;
  p=h;
  if(h==NULL)
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
void divide()
{
  node *tmp=head;
  node *tmp2=head;
  if(head==NULL)
  {
    cout<<"list is emplty"<<endl;
    return;
  }
  int n=0;
  while(tmp2!=NULL)
  {
    tmp=tmp2;
    tmp2=tmp2->link;
    if(n%2==0)
    {
        tmp->link=head1;
        head1=tmp;
    }
    else
    {
      tmp->link=head2;
      head2=tmp;
    }
    n++;
  }
}
int main()
{
  cout<<"enter how many nodes u wanna insert"<<endl;
  int x;
  cin>>x;
  while(x--)
  {
    ins();
  }
  cout<<"original linked list:"<<endl;
  disp(head);
  divide();
  cout<<"linked list 1:"<<endl;
  disp(head1);
  cout<<"linked list 2"<<endl;
  disp(head2);
}
