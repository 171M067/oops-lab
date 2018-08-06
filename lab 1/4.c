#include<stdio.h>
int fact(int i)
{
    if(i==1)
        return 1;
    else
        return (i*fact(i-1));
}
void main()
{
    int i;
    printf("enter values of i");
    scanf("%d",&i);
    printf("the factorial of given no. is %d",fact(i));
}
