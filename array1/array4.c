#include <stdio.h>
#include <stdlib.h> 
#define SIZE 5

int arr[5];

    int num;
    int location;
void addnumber()
{

  printf("\nEnter number");
  scanf("%d", &num); 

    printf("\nEnter location");
    scanf("%d", &location); 
    arr[location - 1] = num;

}


void display()
{
    int i;
            for (i = 0; i < SIZE; i++)
            {
                //  if(arr[i] != 0)
                printf(" %d", arr[i]);

            }
}

void removenum()
{
    printf("enter the remove location");
    scanf("%d",&location);
     arr[location-1]=0;
}


void search()
{
    int i;
    int found=0;
    printf("enter the search value");
    scanf("%d",&num);
    for(i=0;i<SIZE;i++)
    {
        if(arr[i]==num)
        {
            found = 1;
        }
   
    }

    if(found == 1)
    {
        printf("\nfound");
    }
    else
    {
        printf("\n not found");
    }
}

int main()
{

   
    int i;
    int choice;

    while (1)
    {
        printf("\n1 For Add");
        printf("\n2 For Display");
        printf("\n3 enter the remove");
        printf("\n4 enter the serach value");
        printf("\n0 For Exit");
        printf("\nEnter your choice");

        scanf("%d", &choice); 

        switch (choice)
        {
        case 1:
            addnumber();
            break;
        case 2:
            display();
            break;
        case 3:
            removenum();
            break;
        case 4:
            search();
            break;
        case 0:
            exit(0);
        default:
            break;
        } 
    } 
   
return 0;
}