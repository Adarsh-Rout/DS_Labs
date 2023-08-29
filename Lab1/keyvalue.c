#include <stdio.h>

int main() {
    // Enter CoDe
    int n;
    printf("Enter the value for array size: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the array value for %d ",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }printf("\n");
    int keyval,count=0;
    printf("Enter the key value: ");
    scanf("%d",&keyval);
    for(int i=0;i<n;i++)
    {
        if(keyval==array[i])
        {
            printf("Key value is present in the array i.e. %d\n",array[i]);
            count++;
        }
    }if(count==0)
    {
        printf("Key not found");
    }
                            
    return 0;
}