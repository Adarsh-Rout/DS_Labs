#include <stdio.h>
void search(int arr[], int x, int y)
{   int count=0;
    for(int i=x-1;i>=0;i--)
    {
    if(arr[i]==y)
        {
            printf("\ntrue");
            count++;
        }
    }
    if(count==0)
    {
        printf("\nfalse");
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
        printf("Enter the array value for %d ",i);
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