/*doubly circular*/
#include<iostream>
using namespace std;
struct node{
	int no;
	char a[100];
	float b;
	struct node *l;
	struct node *r;
};
struct node *head=NULL;
void ins_begin()
{
	node *tmp=new node;
	cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
   cin>>tmp->a;
  cout<<"enter cgpa"<<endl;
  cin>>tmp->b;
	if(head==NULL)
	{
		head=tmp;
		head->r=head;
		head->l=head;
		return;
	}
	tmp->r=head;
	tmp->l=head->l;
	head->l->r=tmp;
	head->l=tmp;
	head=tmp;
	return;
}
void ins_end()
{
	node *tmp=new node;
	cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
   cin>>tmp->a;
  cout<<"enter cgpa"<<endl;
  cin>>tmp->b;
	if(head==NULL)
	{
		head=tmp;
		head->r=head;
		head->l=head;
		return;
	}
	node *p=head;
	while(p->r!=head)
	{
		p=p->r;
	}
	tmp->r=head;
	head->l=tmp;
	tmp->l=p;
	p->r=tmp;
	return;
}
void del()
{
	int x,cnt=0;
	cout<<"enter index at which u wanna del data"<<endl;
	cin>>x;
	node *p=head;
	if(head==NULL)
	{
		cout<<"empty list "<<endl;
		return;
	}
	while(p->r!=head)
	{
		p=p->r;
		cnt++;
	}
	if(x>cnt)
	{
		cout<<"invalid choice..."<<endl;
		return;
	}
	else
	{
		p=head;
		cnt=0;
		while(x--)
		{
			p=p->r;
		}
		p->l->r=p->r;
		p->r->l=p->l;
		head=p->r;
		return;
 	}
	
}
void search()
{
	node *temp=head;
	cout<<"enter roll no u want to find:\n";
  int x;
  cin>>x;
  temp=head;
  while(temp->r!=head)
  {
    if(temp->no==x)
    {
        cout<<temp->no<<"  "<<temp->a<<"  "<<temp->b<<endl;
        return;
    }
    temp=temp->r;
  }
  if(x==temp->no)
  {
      cout<<temp->no<<"  "<<temp->a<<"  "<<temp->b<<endl;
      return;
  }
  else
  cout<<"not found...."<<endl;
  return;
}
void ins()
{
	int x;node *p=head;
	cout<<"enter index at which u wanna insert data"<<endl;
	cin>>x;
	if(head!=NULL)
	{
		int cnt=1;
		while(p->r!=head)
		{
			p=p->r;
			cnt++;
		}
		if(cnt-1<x)
		{
			cout<<"invalid choice"<<endl;
			return;
		}
		node *tmp=new node;
		cout<<"enter  no"<<endl;
	  cin>>tmp->no;
	  cout<<"enter name"<<endl;
	   cin>>tmp->a;
	  cout<<"enter cgpa"<<endl;
	  cin>>tmp->b;
		p=head;
		if(x==0)
		{
			head=tmp;
		}
		while(x--)
		{
			p=p->r;
		}
		tmp->r=p;
		tmp->l=p->l;
		p->l->r=tmp;
		p->l=tmp;

		return;
	}
	else if(x>0)
	{
		cout<<"invalid choice"<<endl;
		return;
	}
	else{
		node *tmp=new node;
		cout<<"enter  no"<<endl;
	  cin>>tmp->no;
	  cout<<"enter name"<<endl;
	   cin>>tmp->a;
	  cout<<"enter cgpa"<<endl;
	  cin>>tmp->b;
		head=tmp;
		head->l=head;
		head->r=head;
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
	while(p->r!=head)
	{
		cout<<p->no<<"  "<<p->a<<"  "<<p->b<<endl;
		p=p->r;
	}
	cout<<p->no<<"  "<<p->a<<"  "<<p->b<<endl;
}
int main()
{
	int m=1;
	while(m)
	{
		cout<<"1)insert\n2)display\n3)delete\n4)search\n";
		int n0;
		cin>>n0;
		switch(n0)
		{
			case 1:
				{
					cout<<"1)begin\n2)end\n3)between\n";
					int n1;
					cin>>n1;
					switch(n1)
					{
						case 1:
							{
								ins_begin();
								break;
							}
						case 2:
							{
								ins_end();
								break;
							}
						case 3:
							{
								ins();
								break;
							}
					}
					break;
				}
				case 2:
					{
						display();
						break;
					}
					case 3:
						{
							del();
							break;
						}
						case 4:
							{
								search();
								break;
							}
				cout<<"if u want to continue....press 1\n otherwise press 0\n";
    cin>>m;
		}
	}
}
