#include <stdio.h>
#define SIZE 5

int a[]={12,43,64,65,76};

void binarysearch(int search)
{
    int found = 0;
    int min = 0,mid,max=SIZE- 1;

    while (min <= max)
    {
        mid = (min+max)/2;

        if(search == a[mid])
        {
            found = 1;
            break;            
        }
        else if (search > a[mid] )
        {
            min = mid + 1;
        }
        else if (search < a[mid])
        {
            max = mid-1;
        }
    }
    if(found == 0 )
    {
        printf("\n %d is not found",search);
    }
    else
    {
        printf("\n %d is found",search);
    }
}

int main()
{
    binarysearch(21);
    binarysearch(43);
    
    return 0;
}