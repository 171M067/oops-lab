#include<stdio.h>
void main()
{
    int i,j;
    printf("enter values of i and j");
    scanf("%d%d",&i,&j);
    i=i+j-(i%j);
    printf("the round of integer is %d",i);
}
