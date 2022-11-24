#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,a,b,k,i;
    float c;
    printf("C Program to Print Square,Cube and Square root of all number from 1 to N");
    printf("\nEnter a Number");
    scanf("%d",&n);
    k=n;
    for(i=1;i<=k;i++)
    {
        n=i;
        a=n;
        b=n;
        c=sqrt(n);
        printf("Square of %d=%d\n",i,a*a);
        printf("Cube of %d=%d\n",i,b*b*b);
        printf("Square Root of %d=%f\n",i,c);
        printf("-------------------------");
        printf("\n");
    }
    getch();
}
