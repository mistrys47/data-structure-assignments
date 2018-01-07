#include<bits/stdc++.h>
using namespace std;

int arr[12];

void insert()
{
	int j,b,a;
	float d;
	cout<<"enter no to be insert"<<endl;
	cin>>j;
	d=0.9;
	b=j*d;
	d=j*d-b;
	d=12*d;
	b=d;
	if(arr[b]==-1)
	{
		arr[b]=j;
		return;
	}
	a=(b+1)%12;
	while(a!=b)
	{
		if(arr[a]==-1)
		{
			arr[a]=j;
			return;
		}
		a=(a+1)%12;
	}
	cout<<"overflow"<<endl;
}

void search()
{
	int j,b,a;
	float d;
	cout<<"enter no to be searched"<<endl;
	cin>>j;
	d=0.9;
	b=j*d;
	d=j*d-b;
	d=12*d;
	b=d;
	if(arr[b]==j)
	{
		cout<<j<<" found at index "<<b<<endl;
		return;
	}
	a=(b+1)%12;
	while(a!=b)
	{
		if(arr[a]==j)
		{
			cout<<j<<" found at index "<<b<<endl;
			return;
		}
		a=(a+1)%12;
	}
	cout<<"not found"<<endl;
}

void display()
{
	int i;
	for(i=0;i<12;i++)
	{
		cout<<"at index"<<i<<endl;
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
	for(i=0;i<12;i++)
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


