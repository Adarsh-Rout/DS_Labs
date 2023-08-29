#include <stdio.h>
#include<stdlib.h>
int main() {
    // Enter CoDe
    int size1,size2;
    printf("Enter array 1 size: ");
    scanf("%d",&size1);
    int*arr1 = (int*)malloc(size1*sizeof(int));
    printf("Enter array 2 size: ");
    scanf("%d",&size2);
    int*arr2 = (int*)malloc(size2*sizeof(int));

    for(int i=0;i<size1;i++)
    {
        printf("Enter element %d for array 1: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\nArray 1 is\n");
    for(int i=0;i<size1;i++)
    {
        printf(" %d",arr1[i]);
    }printf("\n");
    for(int i=0;i<size2;i++)
    {
        printf("Enter element %d for array 2: ",i);
        scanf("%d",&arr2[i]);
    }
    printf("\nArray 2 is\n");
    for(int i=0;i<size2;i++)
    {
        printf(" %d",arr2[i]);
    }printf("\n");
    printf("The Intersection Array is \n");
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf(" %d",arr1[i]);
            }
        }
    }    
    return 0;
}