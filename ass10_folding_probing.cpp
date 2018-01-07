#include<bits/stdc++.h>
using namespace std;
long int arr[100];

void insert()
{
	char c[8];
	int a,b=0,d,i=0;
	long int j;
	cout<<"enter no to be inserted"<<endl;
	cin>>c;
	j=atoi(c);
	while(c[i]!='\0'&&c[i+1]!='\0')
	{
		a=c[i]-48;
		d=c[i+1]-48;
		b=b+10*a+d;
		i=i+2;
	}
	if(c[i]!='\0')
	{
		a=c[i]-48;
	}
	else
	{
		a=0;
	}
	b=b+a;
	b=b%100;
	if(arr[b]==-1)
	{
		arr[b]=j;
		return;
	}
	a=(b+1)%100;
	while(a!=b)
	{
		if(arr[a]==-1)
		{
			arr[a]=j;
			return;
		}
		a=(a+1)%100;
	}
	cout<<"overflow"<<endl;
}

void search()
{
	char c[8];
	int a,b=0,d,i=0;
	long int j;
	cout<<"enter no to be search"<<endl;
	cin>>c;
	j=atoi(c);
	while(c[i]!='\0' && c[i+1]!='\0')
	{
		a=c[i]-48;
		d=c[i+1]-48;
		b=b+10*a+d;
		i=i+2;
	}
	if(c[i]!='\0')
	{
		a=c[i]-48;
	}
	else
	{
		a=0;
	}
	b=b+a;
	b=b%100;
	if(arr[b]==j)
	{
		cout<<j<<" found at index "<<b<<endl;
		return;
	}
	a=(b+1)%100;
	while(a!=b)
	{
		if(arr[a]==j)
		{
			cout<<j<<" found at index "<<a<<endl;
			return;
		}
		a=(a+1)%100;
	}
	cout<<"not found"<<endl;
}

void display (void)
{
	int i;
	for(i=0;i<100;i++)
	{
		cout<<"index at "<<i<<endl;
		if(arr[i]==-1)
		{
			continue;
		}
		cout<<arr[i]<<endl;
	}
}


int main()
{
	int i;
	for(i=0;i<100;i++)
	{
		arr[i]=-1;
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
	return 0;
}


