#include<stdio.h>
void main()
{
    int i,a,d1,d2,d3,d4;
    for(i=33;i<=99;i++)
    {
        a=i*i;
        d1=a/1000;
        d2=(a%1000)/100;
        d3=((a%1000)%100)/10;
        d4=((a%1000)%100)%10;
        if((d1==d2)&&(d3==d4)&&(d1!=d3))
            printf("%d",a);
    }
}
