
#include<stdio.h>

int front=-1;
int rear=-1;
struct que{
  char s[15];
}queue[15];
void insert()
{
  if ((front == 0 && rear == 15 - 1) || (front == rear + 1))
   {
       printf("queue is full");
       return;
   }
   if (rear ==  - 1)
   {
       rear++;
       front++;
   }
   else if (rear == 15 - 1 && front > 0)
   {
       rear = 0;
   }
   else
   {
       rear++;
   }
   printf("\nenter id code\n");
   scanf("%s",queue[rear].s);
  // printf("%s",queue[rear].s);
}
void display()
{
    int i,j=1;
    printf("\n");
    if (front > rear)
    {
        for (i = front; i < 15; i++)
        {
            printf("%d  ",j++);
            printf("%s \n", queue[i].s);
        }
        for (i = 0; i <= rear; i++)
        {
            printf("%d  ",j++);
            printf("%s \n", queue[i].s);
          }
    }
    else
    {
        for (i = front; i <= rear; i++){printf("%d  ",j++);
            printf("%s \n", queue[i].s);}
    }
}
void delete()
{
    if (front ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
      //  printf("\n %s deleted", queue[front].s);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        //printf("\n %d deleted", queue[front].s);
        front++;
    }
}
int main()
{
  int ch;
  do
    {
        printf("\n\n Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:{
                insert();
                break;}
            case 2:{
                delete();
                break;}
            case 3:{
                display();
                break;}
        }
    }while (ch != 0);
}
