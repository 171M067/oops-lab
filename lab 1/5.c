#include<stdio.h>
void main()
{
    int i;
    char s[40];
    printf("enter string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
    printf("the length of given string is %d",i);
}
