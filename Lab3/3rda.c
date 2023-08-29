#include <stdio.h>
#include<stdlib.h>
int main() {
    // Enter CoDe
    int size,rot;
    printf("Enter array size: ");
    scanf("%d",&size);
    int*arr = (int*)malloc(size*sizeof(int));
    printf("Enter no. of rotations: ");
    scanf("%d",&rot);
    for(int i=0;i<size;i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nArray is\n");
    for(int i=0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }printf("\n");
    for(int i=0;i<size;i++)
    {
        if(i+rot<size)
        {
            printf(" %d",arr[i+rot]);
        }
        else
        {
            printf(" %d",arr[(i-size)+rot]);
        }
    }                      
    return 0;
}