#include<stdio.h>
//Initialize front, rear, an array queue and its size as global variables
int front=-1,rear=-1,q[10],size=5,item;

void Enqueue()
{
   if(rear==size-1)
   {
      printf("\nQueue is full");
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