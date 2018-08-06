#include<stdio.h>
#include<string.h>
void main()
{
    int i,l1,l2,c=0;
    char *m,*n;
    char s[40],t[30];
    printf("enter string ");
    gets(s);
    printf("enter another string ");
    gets(t);
    m=s;n=t;
    l1=strlen(t);
    l2=strlen(s);
    //printf("\n%d\n%d\n",l1,l2);
    for(i=0;i<(l2-l1);i++)
        m++;
    while(*m!='\0')
    {
        if(*m==*n)
            c++;
        m++;
        n++;
    }
    if(c==l1)
        printf("1");
    else
        printf("0");
}
