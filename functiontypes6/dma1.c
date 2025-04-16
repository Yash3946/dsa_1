    // dma = > dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main()

{
    int *p;
    int *a;

    a=calloc(5,sizeof(int)); //store in array types
    p=malloc(sizeof(int)); //store 4 bytes
 // p=(int*)(malloc(sizeof(int)));

    printf("\n enter the number : ");
    scanf("%d",p);

    printf("p = %d",*p);
    free(p);

    return 0;
}