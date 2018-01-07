#include<bits/stdc++.h>
using namespace std;
struct node{
  int no;

  node* link;
}*head=NULL;
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
void swapp()
{
	if(head==NULL || head->link==NULL)
	{
		return;
	}
	int flag=0;
	node *cur=head,*temp;head=head->link;node *prv=NULL;
	while(cur->link!=NULL)
	{
		//cout<<cur->no;
		
		temp=cur->link;//cout<<temp->no;
		cur->link=cur->link->link;
		temp->link=cur;
		if(flag)
		prv->link=temp;
		prv=cur;
		cur=cur->link;
		flag+=1;
		if(cur==NULL)
		break;
	}
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
      cout<<p->no<<endl;
      p=p->link;
    }
    cout<<p->no<<endl;
    return;
  }
  int main()
  {
    cout<<"enter no of nodes u wanna add"<<endl;
    int x,y;
    cin>>x;
    while(x--)
    {
      ins();
    }
    display();
    swapp();
   display();
  }
