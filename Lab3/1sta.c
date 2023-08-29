#include <stdio.h>
#include <stdlib.h>
void findMinMax(int array[], int x)
{
    int minm,maxm,pos1,pos2;
    minm = maxm = array[0];
    for(int i=0;i<x;i++)
    {
        if(array[i]<minm)
        {
            minm = array[i];
            pos1 = i;
        }
        if(array[i]>maxm)
        {
            maxm = array[i];
            pos2 = i;
        }
    }
    printf("Minimum Value in the array: %d\n",minm);
    printf("Position of the minimum value is: %d\n",pos1);
    printf("Maximum value in the array is: %d\n",maxm);
    printf("Position of the maximum value is: %d",pos2);
}
int main() {
    // Enter CoDe
    int n;
    printf("Enter the Size of the Array Please: ");
    scanf("%d",&n);

    int*array = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("Enter the array element {%d}: ",i+1);
        scanf("%d",&array[i]);
    }  

    findMinMax(array,n);                   
                            
    return 0;
}