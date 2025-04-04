/*
Before Sorting: 96 32 48 74 58 15 

After Sorting: 15 32 48 58 74 96 
*/

#include<stdio.h>

#define S 6
int arr[] = {96 , 32 , 48 , 74 , 58 , 15};

void Display()
{
    int i;
    for(i=0; i<S; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void BubbleSort()
{
    int i, j, temp;
    for(i=0; i<S-1; i++)
    {
        for(j=0; j<S-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    printf("Before Sorting: ");
    Display();
    printf("\nAfter Sorting: ");
    BubbleSort();
    Display();


    return 0;
}