    // dma = > dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main()

{
    int *p;
    int *a;

    p=malloc(sizeof(int)); //store 4 bytes[only 1 block]
    a=calloc(5,sizeof(int)); //store in array types[parts me devide karega]
 // p=(int*)(malloc(sizeof(int)));

    printf("\n enter the number : ");
    scanf("%d",p);
    printf("p = %d",*p);
    free(p);


    printf("\n enter the number : ");
    scanf("%d",a);
    printf("a = %d",*a);
    free(a);
    return 0;
}