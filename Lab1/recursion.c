#include <stdio.h>
int search(int arr[], int x, int y)
{   int count=0;
    if(arr[x]==y)
    {
        printf("true");
        count++;
    }
    else
    {
        x=x-1;
        if(x==0)
        {
            return 0;
        }
    } return x;
    search(arr[x], x, y);
    if(count==0);
    {
        printf("false")
    }
}
int main() {
    // Enter CoDe
    int n,keyval;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the key value: ");
    scanf("%d",&keyval);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the array value for array index %d: ",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    search(array, n, keyval);
    printf("\n");
    

                            
    return 0;
}