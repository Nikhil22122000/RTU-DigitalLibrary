#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}node;
node *top=NULL;
void push(int val)
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL)
        printf("Stack is full\n");
    else
    {
        temp->data=val;
        if(top==NULL)
        {
            temp->link=NULL;
            top=temp;
        }
        else
        {
            temp->link=top;
            top=temp;
        }
    }
}
int pop(void)
{
    int val=0;
    node *temp;
    temp=top;
    if(top==NULL)
        printf("STACK is empty\n");
    else if(temp->link==NULL)
    {
        val=temp->data;
        top=NULL;
        free(temp);
    }
    else
    {
        top=top->link;
        val=temp->data;
        free(temp);
    }
    return val;
}
void diplay_stack(void)
{
    node *temp;
    temp=top;
    if(temp==NULL)
        printf("Stack is empty\n");
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
        printf("\n\n");
    }
}
int main()
{
 int n,val,val2;
 do
 {
     printf("Enter the Choice:\n");
     printf("1) Push\n2) Pop\n3) Display\n4) Quit\n");
     scanf("%d",&n);
     switch(n)
     {
     case 1:
         printf("enter the value\n");
         scanf("%d",&val);
         push(val);
         break;
     case 2:
        val2=pop();
        printf("Value popped is %d\n",val2);  /* val=0 is value given as default if stack empty is the val=0 will be shown */
        break;
     case 3:
        printf("Elements of stacks are :\n");
        diplay_stack();
        break;
     case 4:
        printf("EXIT\n");
        break;
     default:
        printf("Invalid input\n");
        break;
     }
 }while(n!=4);
 return 0;
}
