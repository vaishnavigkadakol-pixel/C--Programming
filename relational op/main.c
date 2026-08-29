#include <stdio.h>
#include <conio.h>
void main()
{
    int a=20,b=6,c,d,e=7;
    c=b++;
    d=b;
    printf("%d",a<b>c>d);
    printf("%d",b==e);
    printf("%d",c+1>a);
    printf("%d",a+c==b<e>c+d);
}
