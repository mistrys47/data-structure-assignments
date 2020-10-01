#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
	int no;
	char a[100];
	float b;
	struct node *l;
	struct node *r;
};
struct node *head=NULL;
void ins()
{
	node *tmp=new node;
	cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"ENTER NAME"<<endl;
   scanf(" %[^\t\n]s",tmp->a);

  cout<<"enter cgpa"<<endl;
  cin>>tmp->b;
  tmp->l=NULL;
  tmp->r=NULL;
  if(head==NULL)
  {
  	head=tmp;
  	return;
  }
  else
  {
  	tmp->r=head;
  	head->l=tmp;
  	head=tmp;
  	return;
  }
}
void display()
{
	node *p;
	p=head;
	if(head==NULL)
	{
		cout<<"link list is empty"<<endl;
		return;
	}
	while(p->r!=NULL)
	{
		cout<<p->no<<"  "<<p->a<<"  "<<p->b<<endl;
		p=p->r;
	}
	cout<<p->no<<"  "<<p->a<<"  "<<p->b<<endl;
}
node* reverse()
{
	if(head==NULL)
	return head;
	node *tmp=head,*tmp1,*tmp2=head;
	//node *pre=NULL;
	while(tmp2!=NULL)
	{
		tmp=tmp2;
		tmp2=tmp2->r;
		tmp1=tmp->r;
		tmp->r=tmp->l;
		tmp->l=tmp1;
		head=tmp;
	}
	return head;
}
int main()
{
	int ch;
	cout<<"enter no of nodes\n";
	cin>>ch;
	while(ch--)
	{
		ins();
	}
	display();
	head=reverse();
	display();
}
