#include <stdio.h>
#include<stdlib.h>
struct employ
{
    char employee_name[100];
    char gen[2];
    char desg[15];
    char dept[15];
    int bp;
};
int grossPay(struct employ x)
{
    int HR,DA,gp;
    HR = (x.bp)*(0.25);
    DA = (x.bp)*(0.5);
    gp = (x.bp) + HR + DA;

    return gp;
}
int main() {
    // Enter CoDe
    int x;

    printf("Enter the Value of x: ");
    scanf("%d",&x);
    struct employ *employee = (struct employ*)malloc(x*sizeof(struct employ));
    for(int i=0;i<x;i++)
    {
        printf("Enter the elements for Employee %d: ",i+1);
        scanf("%s", employee[i].employee_name);
        scanf("%s", employee[i].gen);
        scanf("%s", employee[i].desg);
        scanf("%s", employee[i].dept);
        scanf("%d", &employee[i].bp);
    }printf("\n");
    for(int i=0;i<x;i++) 
    {
        int k = grossPay(employee[i]);
        printf("%s GrossPay is %d \n",employee[i].employee_name,k);
    }                    
    free(employee);                        
    return 0;
}