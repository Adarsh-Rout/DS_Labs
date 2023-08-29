#include <stdio.h>
void move(int n, char source, char destination, char spare)
{
    if(n==1)
    {
        printf("\nMove from %c to %c",source,destination);
    }
    else
    {
        move(n-1,source,spare,destination);
        move(1,source,destination,spare);
        move(n-1,spare,destination,source);
    }
}
int main() {
    // Enter CoDe
    int n;
    printf("Enter the number of RINGS: ");
    scanf("%d",&n);
    move(n,'A','C','B');                            
    return 0;
}