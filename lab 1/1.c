#include<stdio.h>
void main()
{
    int n,c=0;
    printf("enter a no.");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        c++;
    }
    printf("the given no. is %d digit no.",c);
}
