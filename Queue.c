#include<stdio.h>
#include<stdlib.h>

#define N 10
int q[N];
int front=-1,rear=-1;
void display();
void enqueue();
void dequeue();
int main()
{
  int ch;
  while(1){
        printf("\n1.enqueue operation:\n");
        printf("2.dequeue operation:\n");
        printf("3.display operation:\n");
        printf("4.Exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
              case 1: enqueue();
               break;
              case 2: dequeue();
               break;
              case 3: display(); 
              break;
              case 4: exit(1) ;
              break;
              default : printf("invalid choice:");\
                 break;
        }
  }
  return 0;
}
void enqueue()
{
      if(rear==(N-1))
      {
            printf("Queue is full\n:");
      }
      else if(front==-1&& rear==-1)
      {
            front=rear=0;
            int x;
            printf("enter an element:");
            scanf("%d",&x);
            q[rear]=x;
            rear++;
      }
      else
      {
             int a;
            printf("enter an element:");
            scanf("%d",&a);
            q[rear]=a;
            rear++;
      }
      
}
void dequeue()
{
      if(front==-1 && rear==-1)
      {
            printf("Queue is empty:\n");
      }
      else if(front==rear)
      {     int x;
          x=q[front];
          printf("deleted element is %d",x);
            front=rear=-1;
      }
      else{
              int x;
      x=q[front];
      printf("deleted element is %d",x);
            front++;
      }
}
void display()
{
     if(front==-1 && rear==-1|| rear==front)
      {
            printf("Queue is empty:\n");
      }
      else
      {
            int x;
            for(int i=front;i<rear;i++)
            {
                  printf("%d ",q[i]);
            }
      }
      
}            
               
                       
                     
      
