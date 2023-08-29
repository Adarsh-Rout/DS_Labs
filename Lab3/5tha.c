#include <stdio.h>
#include <stdlib.h>
void reverse(int array[],int x)
{
    printf("\nReversed Array\n");
    int *rever = malloc(x*sizeof(int));
    int a = x;
    for(int i=0;i<x;i++) 
    {
        rever[i] = array[a-1];
        a--;
    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",rever[i]);
    } 
}
int main() {
    // Enter CoDe
    int n;
    printf("Enter the Size of the Array Please: ");
    scanf("%d",&n);

    int*array = malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        printf("Enter the array element {%d}: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Original Array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }   

    reverse(array,n);                     
                            
    return 0;
}