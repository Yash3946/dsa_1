#include<stdio.h>       
#include<stdlib.h>
#define SIZE 5

int array[SIZE];

void add(int num ,int location)
{
  array[location-1] = num;
}
void removedata(int location)
{
    array[location-1] = 0;
}
void display()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("%d",array[i]);
    }
}


int main()
{
    add(20,3);
    add(32,2);
    
    display();

    return 0;
}