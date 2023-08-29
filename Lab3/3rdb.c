#include <stdio.h>
struct num
{
    float real;
    float comp;
};
void add(struct num x, struct num y)
{
    printf("The sum of input is: %.2f + %.2fi",(x.real+y.real),(x.comp+y.comp));
}
void sub(struct num x, struct num y)
{
    printf("The difference of input is: %.2f + %.2fi",(x.real-y.real),(x.comp-y.comp));
}
void mul(struct num x, struct num y)
{
    printf("The product of input is: %.2f + %.2fi",((x.real*y.real)-(x.comp*y.comp)),((x.real*y.comp)+(y.real*x.comp)));
}
void div(struct num x, struct num y)
{
    float k = (((x.real*y.real)+(x.comp*y.comp)) / (y.real*y.real)+(y.comp*y.comp));
    float l = (((y.real*x.comp)-(x.real*y.comp)) / (y.real*y.real)+(y.comp*y.comp));
    printf("The quotient of input is: %.2f + %.2fi",k,l);
}
int main() {
    // Enter CoDe
    int n;
    struct num number1,number2;
   
    printf("Enter the real part of the num1: ");
    scanf("%f",&number1.real);                      
    printf("Enter the complex part of the num1: ");
    scanf("%f",&number1.comp);
    printf("Enter the real part of the num2: ");
    scanf("%f",&number2.real);                      
    printf("Enter the complex part of the num2: ");
    scanf("%f",&number2.comp);   

    printf("Enter an operation from \n1-Add\n2-Subtract\n3-Multiply\n4-Divide: ");
    scanf("%d",&n);
    if(n>4)
    {
        printf("Invalid Input");
    }
    if(n==1)
    {
        add(number1,number2);
    } 
    if(n==2)
    {
        sub(number1,number2);
    } 
    if(n==3)
    {
        mul(number1,number2);
    } 
    if(n==4)
    {
        div(number1,number2);
    }                   
    return 0;
}