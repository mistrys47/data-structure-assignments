/*doubly linked list*/
#include<iostream>
using namespace std;
struct node{
	int no;
	char a[100];
	float b;
	struct node *l;
	struct node *r;
};
struct node *head;
void ins_begin()
{
	node *tmp=new node;
	cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
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
void ins_end()
{
	node *p;
	node *tmp=new node;
	cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
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
	p=head;
	while(p->r!=NULL)
	{
		p=p->r;
	}
	p->r=tmp;
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
void ins()
{
	cout<<"enter index at which u want to insert no:";
	int x;
	cin>>x;int cnt=0;node  *p=head;
	while(p->r!=NULL)
	{
		cnt++;
		p=p->r;
	}
	if(cnt<x)
	{
		cout<<"can't be inserted"<<endl;
		return;
	}
	node *tmp=new node;node *prev=head;
	cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
   scanf(" %[^\t\n]s",tmp->a);
  cout<<"enter cgpa"<<endl;
  cin>>tmp->b;
  tmp->l=NULL;
  tmp->r=NULL;
	cnt=0;p=head;
	while(cnt!=x )
	{
		prev=p;
		p=p->r;
		cnt++;
	}

	p->l=tmp;
	tmp->r=p;
	tmp->l=prev;
	prev->r=tmp;
}
void del()
{
	cout<<"enter index at which u wanna delete node"<<endl;
	int x;
	cin>>x;

	int cnt=0;node  *p=head;
	while(p!=NULL)
	{
		cnt++;
		p=p->r;
	}
	if(x==0 && cnt==1)
	{
		head=NULL;
		return;
	}
	if(x==0)
	{
		head=head->r;
		return;
	}
	if(cnt-1<x)
	{
		cout<<"can't be deleted"<<endl;
		return;
	}
	cnt=0;p=head;node* prev=NULL;
	while(cnt!=x)
	{
		prev=p;
		p=p->r;
		cnt++;
	}
	prev->r=p->r;
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
