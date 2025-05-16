#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int arr[SIZE];

int top=-1;
int i;
int no;
int stack[SIZE];

void push()
{
    if(top == SIZE -1)
    {
        printf("\n Stack is full");
    }
    else
    {
        printf("enter the number");
        scanf("%d",&no);
        top++;
        stack[top]=no;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("stack is empty");
    }
    else
    {
         printf("\n remove top element: %d", stack[top]);
        top--; 
    }
}
void display()
{
    if(top != -1)
    {
            for (i = top; i >= 0; i--)
            {
                printf(" %d", stack[i]);
            }
    }
    else
    {
        printf("stack is empty");
    }        
}

int main()
{
     int choice;

    while (1)
    {
        printf("\n1 For push");
        printf("\n2 for pop");
        printf("\n3 for display");
        printf("\n0 For Exit");
        printf("\nEnter your choice");

        scanf("%d", &choice); 

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
        default:
            break;
        } 
    } 
    return 0;
}