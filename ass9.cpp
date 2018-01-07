#include<bits/stdc++.h>
using namespace std;
struct node{
char a;
node *l;
node *r;
};

int mirror(node *head1,node *head2)
{
	if(head1==NULL && head2==NULL)
	return 1;
	if(head1==NULL || head2==NULL)
	return 0;
	return head1->a==head2->a && mirror(head1->l,head2->r) && mirror(head1->r,head2->l);
}
node *ins(char b)
{
	node *head=new node();
	head->a=b;
	head->l=head->r=NULL;
	return head;
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
int main()
{
  node *head1=NULL,*head2=NULL;
  /*for first tree*/
  head1=ins('a');
  head1->l=ins('b');
  head1->r=ins('b');
  head1->l->r=ins('c');
  head1->l->l=ins('d');
  head1->r->l=ins('c');
  head1->r->r=ins('d');
  /*for second tree*/
  
  cout<<"inorder traversal of tree "<<endl;
  inorder(head1);
  cout<<endl;
  
  int v;
  v=mirror(head1,head1);
  if(v)
  cout<<"same"<<endl;
  else
  cout<<"not same"<<endl;
  
}
