#include<stdio.h>
//Initialize front, rear, an array queue and its size as global variables
int front=-1,rear=-1,q[10],size=5,item;

void Enqueue()
{
   if(rear==size-1)
   {
      printf("\nQueue is FULL");
   }
   else
   {
      printf("\nEnter the element to be inserted :- ");
      scanf("%d",&item);
      rear++;
      q[rear]=item;
      printf("\nEntered item is :- %d",q[rear]);
      if(rear==0)
      {
        front=0;
      }
   }
}

void Dequeue()
{
   if("front==-1")
   {
      printf("\nQueue is EMPTY");
   }
   else
   {
      item=q[front];
      front++;
      printf("\nThe deleted item is :- %d",item);
      if(front>rear)
      {
         front=-1;
         rear=-1;
      }
   }
}

void Display()
{
   if(front==-1)
   {
      printf("\nQueue is EMPTY");
   }
   else
   {
      printf("\nQueue :-\n");
      for(int i=front;i<=rear;i++)
      {
         printf("%d\t",q[i]);
      }
   }
}

int main()
{
   int n;
   char res;
   do
   {
      printf("MENU :-\n1) Enter element\n2) Delete element\n3) Display queue\nEnter your choice :- ");
      scanf("%d",&n);
      switch (n)
      {
      case 1:
      {
         Enqueue();
         break;
      }
      case 2:
      {
         Dequeue();
         break;
      }
      case 3:
      {
         Display();
         break;
      }
      default:
      printf("\nInvalid input");
      }
      printf("\nDo you want to continue? (y/n)");
      scanf(" %c",&res);
   }while(res=='y');
   return 0;
}
