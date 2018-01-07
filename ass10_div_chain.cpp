#include<bits/stdc++.h>
using namespace std;
struct node
{
	int d;
	struct node* link;
};
struct block
{
	int n;
	struct node* head;
}a[13];
void insert()
{
	cout<<"enter no u wanna add"<<endl;
	int k,m;
	cin>>m;
	k=m%13;
	if(a[k].n==-1)
	{
		a[k].n=m;
		return;
	}
	node *temp=new node();
	temp->d=m;
	temp->link=NULL;
	if(a[k].head==NULL)
	{
		a[k].head=temp;
		return;
	}
	node *temp1=a[k].head;
	while(temp1->link!=NULL)
	{
		temp1=temp1->link;
	}
	temp1->link=temp;
}
void search()
{
	int k,m;
	cout<<"enter the no u wanna search"<<endl;
	cin>>m;
	k=m%13;
	if(a[k].n==m)
	{
		cout<<m<<" is found at "<<k<<" pos."<<endl;
		return;
	}
	if(a[k].n==-1 || a[k].head==NULL)
	{
		cout<<m<<" not found"<<endl;
		return;
	}
	node *temp=a[k].head;
	while(temp!=NULL)
	{
		if(temp->d==m)
		{
			cout<<"found"<<endl;
			return;
		}
		temp=temp->link;
	}
	cout<<m<<" not found"<<endl;
}
void display()
{
	for(int i=0;i<13;i++)
	{
		cout<<"at index "<<i<<endl;
		if(a[i].n==-1)
		{
			continue;
		}
		cout<<a[i].n<<endl;
		node *temp=a[i].head;
		while(temp!=NULL)
		{
			cout<<temp->d<<endl;
			temp=temp->link;
		}
	}
}
int main()
{
	for(int i=0;i<13;i++)
	{
		a[i].n=-1;
		a[i].head=NULL;
	}
	while(1)
	{
		cout<<"1)insert"<<endl<<"2)search"<<endl<<"3)display"<<endl<<"4)exit"<<endl;
		int k;
		cin>>k;
		switch(k)
		{
			case 1:
			{
				insert();
				break;
			}
			case 2:
			{
				search();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			default:
			{
				return 0;	
			}
		}
	}
}
