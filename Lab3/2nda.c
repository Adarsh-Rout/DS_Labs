#include <stdio.h>
#include<stdlib.h>
void secondminmax(int arr[], int size)
{
    int min,max,min_index=0,max_index=0;
    int min_2=0,max_2=0,mini,maxi;
    min = max = arr[0];
    mini = maxi = arr[0];
    for(int i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
            min_index = i;
        }
        if(max<arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(i!=min_index)
        {
            if(mini>arr[i])
            {
                mini = arr[i];
                min_2 = i;
            }
        }
        if(i!=max_index)
        {
            if(maxi<arr[i])
            {
                maxi = arr[i];
                max_2 = i;
            }
        }
    }
    printf("Min is %d at %d & Max is %d at %d",mini,min_2,maxi,max_2);

}
int main() {
    // Enter CoDe
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int*arr = (int*)malloc(size*sizeof(int));

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
    secondminmax(arr,size);                   
    return 0;
}