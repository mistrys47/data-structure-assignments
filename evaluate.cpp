#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
float s[100];
int top=-1;
float evaluate(float a,float b,char c)
{
	switch(c)
	{
		case '+':
			{
				return a+b;
			}
		case '-':
			{
				return b-a;
			}
		case '*':
			{
				return (b)*(a);
			}
		case '/':
			{
				return  (b)/(a);
			}
	}
}
 void push(char a)
{
	s[++top]=a;
	cout<<s[top]<<endl;
}
float pop()
{
	return s[top--];
}
char peep()
{
	return s[top];
}
int main()
{
	char a[100];
	cin>>a;float w;
	for(int i=0;a[i]!='\0';i++)
	{
		if(isalnum(a[i]))

	{
		push(*(a+i)-48);
		
	}
		else
		{
			float d1=pop();
			float d2=pop();
			w=evaluate(d1,d2,*(a+i));
			push(w);
			
		}
	}
	cout<<pop();
}
