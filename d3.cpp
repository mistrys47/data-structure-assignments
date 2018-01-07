#include<iostream>
#include<stdio.h>
using namespace std;

int maxmin(int *a,int n)
{
	
	int i,j,temp;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
return 0;
}
int main()
{
	int a[1000],i,n,p,k;
	
	printf("enter size of array");
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"1)if u want to know max and min from enterd array\n2)if u want 2nd max and 2nd min from entered array\n3)if u want to insert a number at desired index\n4)if u want to delete some number from array residing at any index";
	cin>>p;
	switch(p)
	{
	case 1:
	{
		maxmin(a,n);
		cout<<"max :"<<a[n-1]<<endl<<"min :"<<a[0];
		break;
	}
	case 2:
	{
		maxmin(a,n);
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			continue;
			else
			break;
		}
		cout<<"2nd min :"<<a[i+1]<<endl;
		for(i=n-1;i>0;i--)
		{	
			if(a[i]==a[i+1])
			continue;
			else
			break;
		}
		cout<<"2nd max :"<<a[i-1];
		break;
	}
	case 3:
	{
		cout<<"write index at which u wanna enter a number:";
		cin>>k;
		for(i=n-1;i>=k;i--)
		{
			a[i+1]=a[i];
		}
		cout<<"enter a number u wannas add :";
		cin>>a[k];
		for(i=0;i<=n;i++)
		{
			cout<<a[i]<<endl;
		}
		break;
	}
	case 4:
	{
		cout<<"write index at which u wanna delete a number:";
		cin>>k;
		for(i=k;i<n;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1]=0;
		for(i=0;i<n-1;i++)
		{
			cout<<a[i]<<endl;
		}
		break;
	}


	}
return 0;
}
