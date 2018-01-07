#include<iostream>
using namespace std;
#define maxsize 10
struct stack
{
	int id;
	string q;
	float p;
}g[maxsize];
int top=-1;
void push(string s,int i,float j)
{
	if(top==maxsize-1)
	{
		cout<<"overflow"<<endl;
		return;
	}
	g[++top].id=i;
	g[top].q=s;
	g[top].p=j;
	return;
}
void pop()
{
	if(top==-1)
	{
		cout<<"underflow"<<endl;
		return;
	}
	top--;
	return;
}
void peep()
{
	if(top<0)
	{
		cout<<"nothing in stack"<<endl;
		return;
	}
	cout<<g[top].id;
	cout<<g[top].q<<endl<<g[top].p<<endl;
	return;
}
int main()
{
	push("morris mano",1,450);
	peep();
	push("coreman",2,1400);
	peep();
	pop();
	peep();
}
