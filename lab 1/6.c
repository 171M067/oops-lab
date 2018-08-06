#include<stdio.h>
#include<string.h>
void main()
{
    int i,l;
    char *m,*n;
    char s[40],t[30];
    printf("enter string ");
    gets(s);
    printf("enter another string ");
    gets(t);
    m=s;n=t;
    while(*m!='\0')
    {
        m++;
    }
    printf("\n\n");
    while(*n!='\0')
    {
        *m=*n;
        m++;
        n++;
    }
    *m='\0';
    puts(s);
}
