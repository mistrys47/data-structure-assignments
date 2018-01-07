#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	 node* next;
};
struct block
{
	int number;
	 node* head;
}arr[50];
void insert()
{
	int j,b,a,k;
	long int i;
	cout<<"enter no. to be inserted"<<endl;
	cin>>j;
	i=j*j;
	b=i%10;
	while(i)
	{
		a=i%10;
		i/=10;
	}
	b=10*b+a;
	b=b%50;
	if(arr[b].number==-1)
	{
		arr[b].number=j;
		return;
	}
	 node *temp1,*temp=new node();
	temp->data=j;
	if(arr[b].head==NULL)
	{
		arr[b].head=temp;
		return;
	}
	temp1=arr[b].head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
}
void search()
{
	int j,b,a,k;
	long int i;
	cout<<"enter no. to be searched "<<endl;
	cin>>j;
	i=j*j;
	b=i%10;
	while(i)
	{
		a=i%10;
		i/=10;
	}
	b=10*b+a;
	b=b%50;
	if(arr[b].number==j)
	{
		cout<<j<<" found at index "<<b<<endl;
		return;
	}
	if(arr[b].number==-1||arr[b].head==NULL)
	{
		cout<<"not found "<<endl;
		return;
	}
	 node* temp=arr[b].head;
	while(temp!=NULL)
	{
		if(temp->data==j)
		{
			cout<<j<<" found "<<endl;
			return;
		}
		temp=temp->next;
	}
	cout<<"not found"<<endl;
}

void display ()
{
	int i;
	 node* temp;
	for(i=0;i<50;i++)
	{
		cout<<" at index "<<i<<endl;
		if(arr[i].number==-1)
		{
			continue;
		}
		cout<<arr[i].number<<endl;
		temp=arr[i].head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
}
int main()
{
	for(int i=0;i<50;i++)
	{
		arr[i].number=-1;
		arr[i].head=NULL;
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
