#include<bits/stdc++.h>
using namespace std;
struct node{
char a;
node *l;
node *r;
};
node* insert(node *head,char key)
{

  node *temp=head;
  if(head==NULL)
  {
    head = new node;
    head->a=key;
    head->l=NULL;
    head->r=NULL;
    return head;
  }
  else if(key<temp->a)
  {
  //  cout<<"...........";
    temp->l=insert(temp->l,key);
  }
  else
  {
    temp->r=insert(temp->r,key);
  }
  //cout<<temp->a;
  return temp;
}
void inorder(node *head)
{
  node *temp=head;
  if(temp==NULL)
  return;
//  cout<<"1"<<endl;
  inorder(head->l);
  cout<<head->a;
  inorder(head->r);
}
void preorder(node *head)
{
  node *temp=head;
  if(temp==NULL)
  return;
//  cout<<"1"<<endl;
  cout<<head->a;
  preorder(head->l);
  preorder(head->r);
}
void postorder(node *head)
{
  node *temp=head;
  if(temp==NULL)
  return;
//  cout<<"1"<<endl;

  postorder(head->l);
  postorder(head->r);
  cout<<head->a;
}
void search(node *head,char key)
{
 	if(head==NULL)
 	{
 		cout<<"not found.."<<endl;
 		return;
	}
	if(head->a==key)
	{
		cout<<"found.."<<endl;
		return;
	}
	if(head->a>key)
	{
		search(head->l,key);
		return;
	}
	else
	{
		search(head->r,key);
		return;
	}
}
int maxdepth(node* head) 
{
   if (head==NULL) 
       return 0;
   else
   {
       int lh = maxdepth(head->l);
       int rh = maxdepth(head->r);
       if (lh > rh) 
           return(lh+1);
       else return(rh+1);
   }
} 
int noofnodes(node *head)
{
	if(head==NULL)
	return 0;
	int l=0;
	l+=noofnodes(head->l);
	l+=noofnodes(head->r);
	return l+1;
}
char max(node *head)
{
	if(head==NULL)
	{
		cout<<"no node"<<endl;
		return '!';
	}
	while(head->r!=NULL)
	head=head->r;
	return head->a;
}

char min(node *head)
{
	if(head==NULL)
	{
		cout<<"no node"<<endl;
		return '!';
	}
	while(head->l!=NULL)
	head=head->l;
	return head->a;
}
void del(node *head)
{
	if(head==NULL)
	{
		free(head);
		return;
	}
	del(head->l);
	del(head->r);
	free(head);
}
int main()
{
  node *head=NULL;
  int i=1,n;
  cout<<"1)insert"<<endl<<"2)search"<<endl<<"3)inorder"<<endl<<"4)preorder"<<endl<<"5)postorder"<<endl<<"6)maxdepth"<<endl<<"7)no of nodes"<<endl<<"8)delete"<<endl<<"9)min and max value in b-tree"<<endl;
  while(1)
  {

    cin>>n;
    switch(n)
    {
      case 1:
      {
        char z;
        cout<<"enter value:\n";
        cin>>z;
        head=insert(head,z);
        break;
      }
      case 2:
      {
        cout<<"enter char"<<endl;
        char r;
        cin>>r;
        search(head,r);
        break;
      }
      case 3:
      {
        inorder(head);
        cout<<endl;
        break;
      }
      case 4:
      {
        preorder(head);
        cout<<endl;
        break;
      }
      case 5:
      {
        postorder(head);
        cout<<endl;
        break;
      }
      case 6:
      	{
      		cout<<"max depth"<<maxdepth(head)<<endl;	
      		break;
		}
		case 7:
			{
				cout<<"no of nodes"<<noofnodes(head)<<endl;
				break;
			}
			case 8:
				{
					del(head);
					//	cout<<head->a<<endl;
					break;
				}
				case 9:
					{
						cout<<"min"<<min(head)<<endl;
						cout<<"max"<<max(head)<<endl;
					
						break;
					}
     	 default :
      {
        return 0;
      }

    }
      cout<<"1)insert"<<endl<<"2)search"<<endl<<"3)inorder"<<endl<<"4)preorder"<<endl<<"5)postorder"<<endl<<"6)maxdepth"<<endl<<"7)no of nodes"<<endl<<"8)delete"<<endl<<"9)min and max value in b-tree"<<endl;

  }
}
