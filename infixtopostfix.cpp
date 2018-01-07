#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
char s[100];
int top=-1;
int pricidence(char x)
{
	if(x=='(')
	return 0;
	if(x=='+' || x=='-')
	return 1;
	if(x=='*' ||  x=='/')
	return 2;
	if(x=='^')
	return 3;
	else
	return -1;
}
void push(char x)
{
	s[++top]=x;
}
char pop()
{
	if(top==-1)
	return -1;
	return s[top--];
}
int main()
{
	char a[100];
	gets(a);int flag=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(isalnum(a[i]))
		{
			cout<<a[i];
		}
		else if(a[i]=='('){
		
		push(*(a+i));
					}
		else if(a[i]==')')
		{
			while(s[top]!='(')
			{
				cout<<pop();
			}
			pop();
		}
		else
		{
			
			
			while(pricidence(*(s+top))>=pricidence(*(a+i)))
			{
				cout<<pop();
			}
		
			push(*(a+i));
		}
	}
	while(top!=-1)
	cout<<pop();
}
