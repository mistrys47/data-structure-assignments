
/*linear  linked list*/
#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
#define null 0
using namespace std;
void display();
typedef struct node{
  int no;
  char a[100];
  char b[10];
  float c;
	node *link;
};
 node *firs;
void ins_begin()
{
  node *tmp;
  tmp=(node *)malloc(sizeof(node));
  cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
   scanf(" %[^\t\n]s",tmp->a);
  cout<<"enter gender"<<endl;
   scanf(" %[^\t\n]s",tmp->b);
  cout<<"enter cgpa"<<endl;
  cin>>tmp->c;
  if(firs==NULL)
  {
    firs=tmp;
    tmp->link=0;
  }
  else
  {
    tmp->link=firs;
    firs=tmp;
  }
}
void ins_end()
{
	if(firs==NULL)
	{
		node *tmp;
  tmp=(node *)malloc(sizeof(node));
  cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
   scanf(" %[^\t\n]s",tmp->a);
  cout<<"enter gender"<<endl;
   scanf(" %[^\t\n]s",tmp->b);
  cout<<"enter cgpa"<<endl;
  cin>>tmp->c;
  firs=tmp;
    tmp->link=0;
    return;
	}
	node *p;
	p=firs;
	while(p->link)
	{
		p=p->link;
	}
	p->link=(node *)malloc(sizeof(node));
	cout<<"enter  no"<<endl;
  	cin>>p->link->no;
  	cout<<"enter name"<<endl;
  	 scanf(" %[^\t\n]s",p->link->a);
  	cout<<"enter gender"<<endl;
  	 scanf(" %[^\t\n]s",p->link->b);
  	cout<<"enter  cgpa"<<endl;
  	cin>>p->link->c;
  	p->link->link=0;
}
void ins(int k)
{
	node *temp,*p,*q;
	temp=firs;
	int cnt=0;
	while(cnt!=k-1)
	{
		q=temp;
		temp=temp->link;
		cnt++;
	}
	p=(node *)malloc(sizeof(node));
	cout<<"enter  no"<<endl;
  	cin>>p->no;
  	cout<<"enter name"<<endl;
  	 scanf(" %[^\t\n]s",p->a);
  	cout<<"enter gender"<<endl;
  	 scanf(" %[^\t\n]s",p->b);
  	cout<<"enter  cgpa"<<endl;
  	cin>>p->c;
  	p->link=temp;
  	q->link=p;
}
int s_name()
{
	cout<<"enter name to be serach:\n";
	char w[100];
	 scanf(" %[^\t\n]s",w);;
	node *p;
	p=firs;
	while(p->link)
	{

		if(strcmp(p->a,w)==0){
			cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;return 1;
		}

		else
		p=p->link;
	}

	if(strcmp(p->a,w)==0){
		cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
	return 1;}
	else{
		cout<<"not found"<<endl;
		return 0;
	}

}
int s_no()
{
	cout<<"enter no to be search:\n";
	int e;
	cin>>e;
	node *p;
	p=firs;
		while(p->link)
	{
		if(e==p->no){
			cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
		return 1;}
		else
		p=p->link;
	}
	if(e==p->no){
		cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
	return 1;}
	else{
	cout<<"not found"<<endl;
	return 0;}
}
int s_cgpa()
{
	cout<<"enter cgpa to be search:\n";
	float e;
	cin>>e;
	node *p;
	p=firs;
		while(p->link)
	{
		if(e==p->c){
			cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
		return 1;}
		else
		p=p->link;
	}
	if(e==p->c){
		cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
	return 1;}
	else{
	cout<<"not found"<<endl;
	return 0;}
}
void d_last()
{
	node *p,*q;;
	p=firs;
	while(p->link)
	{
		q=p;
		p=p->link;
	}
	q->link=0;
}
void d_between()
{
	node *p,*q;
	p=firs;int cnt=0;
	int f;
	cout<<"enter the position at which u want to delete the node:\n";
	cin>>f;
  if(f==0)
  {
    firs=firs->link;
    return;
  }
	while(cnt!=f-1)
	{
		q=p;
		p=p->link;
		cnt++;
	}
	q->link=p->link;
}
void display()
{
	node *temp;
	temp=firs;
	if(temp)
	cout<<"no. name  gender  cgpa"<<endl;
	else
	return;
	cout<<"___ _____ _______ ____"<<endl<<endl;
	while(temp->link)
	{
		cout<<temp->no<<"   "<<temp->a<<"   "<<temp->b<<"   "<<temp->c<<endl;
		temp=temp->link;
	}

	{
		cout<<temp->no<<"   "<<temp->a<<"   "<<temp->b<<"   "<<temp->c<<endl;
	}
}

int main()
{


  int n=1,m,l;
  while(n==1)
  {
    cout<<"1)Insert at begin\n2)Insert at last\n3)Insertion in between\n4)Search\n5)Display\n6)Deletion \n";
    cin>>m;
    switch(m)
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
				int k;
				cout<<"enter the position at which node to be insert:\n";
				cin>>k;
				ins(k);
				break;
			}
			case 4:
				{
					int y;
					cout<<"1)Search by name\n2)Search by no\n3)Search by cgpa\n";
					cin>>y;
					switch(y)
					{
						case 1:
							{
								l=s_name();

								break;
							}
							case 2:
								{
									l=s_no();

								break;
								}
								case 3:
									{
										l=s_cgpa();

								break;
									}
					}
					break;
				}
      case 5:
      	{
      		display();
      		break;
		}
		case 6:
			{
				cout<<"1)Deletion at begin\n2)Deletion at last\n3)Deletion in between\n";
				int y;
				cin>>y;
				switch(y)
				{
					case 1:
						{
							firs=firs->link;
							break;
						}
						case 2:
							{
								d_last();
                break;
							}
							case 3:
								{
									d_between();
                  break;
								}
				}
			}
    }
    cout<<"if u want to continue...press 1\n otherwise press 0\n";
    cin>>n;
  }
}
=======
/*linear  linked list*/
#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
#define null 0
using namespace std;
void display();
typedef struct node{
  int no;
  char a[100];
  char b[10];
  float c;
	node *link;
};
 node *firs;
void ins_begin()
{
  node *tmp;
  tmp=(node *)malloc(sizeof(node));
  cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
   scanf(" %[^\t\n]s",tmp->a);
  cout<<"enter gender"<<endl;
   scanf(" %[^\t\n]s",tmp->b);
  cout<<"enter cgpa"<<endl;
  cin>>tmp->c;
  if(firs==NULL)
  {
    firs=tmp;
    tmp->link=0;
  }
  else
  {
    tmp->link=firs;
    firs=tmp;
  }
}
void ins_end()
{
	if(firs==NULL)
	{
		node *tmp;
  tmp=(node *)malloc(sizeof(node));
  cout<<"enter  no"<<endl;
  cin>>tmp->no;
  cout<<"enter name"<<endl;
   scanf(" %[^\t\n]s",tmp->a);
  cout<<"enter gender"<<endl;
   scanf(" %[^\t\n]s",tmp->b);
  cout<<"enter cgpa"<<endl;
  cin>>tmp->c;
  firs=tmp;
    tmp->link=0;
    return;
	}
	node *p;
	p=firs;
	while(p->link)
	{
		p=p->link;
	}
	p->link=(node *)malloc(sizeof(node));
	cout<<"enter  no"<<endl;
  	cin>>p->link->no;
  	cout<<"enter name"<<endl;
  	 scanf(" %[^\t\n]s",p->link->a);
  	cout<<"enter gender"<<endl;
  	 scanf(" %[^\t\n]s",p->link->b);
  	cout<<"enter  cgpa"<<endl;
  	cin>>p->link->c;
  	p->link->link=0;
}
void ins(int k)
{
	node *temp,*p,*q;
	temp=firs;
	int cnt=0;
	while(cnt!=k-1)
	{
		q=temp;
		temp=temp->link;
		cnt++;
	}
	p=(node *)malloc(sizeof(node));
	cout<<"enter  no"<<endl;
  	cin>>p->no;
  	cout<<"enter name"<<endl;
  	 scanf(" %[^\t\n]s",p->a);
  	cout<<"enter gender"<<endl;
  	 scanf(" %[^\t\n]s",p->b);
  	cout<<"enter  cgpa"<<endl;
  	cin>>p->c;
  	p->link=temp;
  	q->link=p;
}
int s_name()
{
	cout<<"enter name to be serach:\n";
	char w[100];
	 scanf(" %[^\t\n]s",w);;
	node *p;
	p=firs;
	while(p->link)
	{

		if(strcmp(p->a,w)==0){
			cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;return 1;
		}

		else
		p=p->link;
	}

	if(strcmp(p->a,w)==0){
		cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
	return 1;}
	else{
		cout<<"not found"<<endl;
		return 0;
	}

}
int s_no()
{
	cout<<"enter no to be search:\n";
	int e;
	cin>>e;
	node *p;
	p=firs;
		while(p->link)
	{
		if(e==p->no){
			cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
		return 1;}
		else
		p=p->link;
	}
	if(e==p->no){
		cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
	return 1;}
	else{
	cout<<"not found"<<endl;
	return 0;}
}
int s_cgpa()
{
	cout<<"enter cgpa to be search:\n";
	float e;
	cin>>e;
	node *p;
	p=firs;
		while(p->link)
	{
		if(e==p->c){
			cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
		return 1;}
		else
		p=p->link;
	}
	if(e==p->c){
		cout<<p->no<<"   "<<p->a<<"   "<<p->b<<"   "<<p->c<<endl;
	return 1;}
	else{
	cout<<"not found"<<endl;
	return 0;}
}
void d_last()
{
	node *p,*q;;
	p=firs;
	while(p->link)
	{
		q=p;
		p=p->link;
	}
	q->link=0;
}
void d_between()
{
	node *p,*q;
	p=firs;int cnt=0;
	int f;
	cout<<"enter the position at which u want to delete the node:\n";
	cin>>f;
  if(f==0)
  {
    firs=firs->link;
    return;
  }
	while(cnt!=f-1)
	{
		q=p;
		p=p->link;
		cnt++;
	}
	q->link=p->link;
}
void display()
{
	node *temp;
	temp=firs;
	if(temp)
	cout<<"no. name  gender  cgpa"<<endl;
	else
	return;
	cout<<"___ _____ _______ ____"<<endl<<endl;
	while(temp->link)
	{
		cout<<temp->no<<"   "<<temp->a<<"   "<<temp->b<<"   "<<temp->c<<endl;
		temp=temp->link;
	}

	{
		cout<<temp->no<<"   "<<temp->a<<"   "<<temp->b<<"   "<<temp->c<<endl;
	}
}

int main()
{


  int n=1,m,l;
  while(n==1)
  {
    cout<<"1)Insert at begin\n2)Insert at last\n3)Insertion in between\n4)Search\n5)Display\n6)Deletion \n";
    cin>>m;
    switch(m)
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
				int k;
				cout<<"enter the position at which node to be insert:\n";
				cin>>k;
				ins(k);
				break;
			}
			case 4:
				{
					int y;
					cout<<"1)Search by name\n2)Search by no\n3)Search by cgpa\n";
					cin>>y;
					switch(y)
					{
						case 1:
							{
								l=s_name();

								break;
							}
							case 2:
								{
									l=s_no();

								break;
								}
								case 3:
									{
										l=s_cgpa();

								break;
									}
					}
					break;
				}
      case 5:
      	{
      		display();
      		break;
		}
		case 6:
			{
				cout<<"1)Deletion at begin\n2)Deletion at last\n3)Deletion in between\n";
				int y;
				cin>>y;
				switch(y)
				{
					case 1:
						{
							firs=firs->link;
							break;
						}
						case 2:
							{
								d_last();
                break;
							}
							case 3:
								{
									d_between();
                  break;
								}
				}
			}
    }
    cout<<"if u want to continue..press 1\n otherwise press 0\n";
    cin>>n;
  }
}
