#include<stdio.h>
#include<stdlib.h>

struct node 
{
    char name[20];
    int age;
    struct node *next;
} *head = NULL , *last=NULL;

int main()
{
    head = malloc (sizeof(struct node));
    printf("Enter the name and age : ");
    scanf("%s%d", head->name , &head->age);
    head->next = NULL;

    printf("\n name = %s", head->name);
    printf("\n age = %d" , head->age);

    head = last;
    return 0;
}
