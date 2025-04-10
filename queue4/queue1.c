#include <stdio.h>
#define S 5

int q[S];
int Front = -1;
int Rear = -1;

void enQueue(int num) 
{
    if (Rear == S - 1) 
    {
        printf("\nQueue is full");
    } 
    else 
    {
        Rear++;
        q[Rear] = num;

        if (Front == -1) 
        {
            Front = 0;
        }
    }
}

void display() 
{
    for (int i = Front; i <= Rear; i++) 
    {
        printf("%d ", q[i]);
    }
}

void removeElement()
{
    if(Front ==-1)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n %d",q[Front]);
        {
            if(Front==Rear)
            {
                Front=-1;
                Rear=-1;
            }  
            else
            {
                Front++;
            }
        }
    }
}

int main() 
{
    while (1) 
    {
        int choice, num;

        printf("\n\n1. Add\n2. Display\n3. Remove\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)  
        {
            case 1:
                printf("\nEnter a number to add: ");
                scanf("%d", &num);
                enQueue(num);
                break;     ///

        
            case 2:
                display();      //
                break;                

            case 3:
                removeElement();
                break;
       
            case 4:
                printf("\nExit program...");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.");
        }
    }
}