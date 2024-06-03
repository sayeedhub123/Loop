#include<stdio.h>
int main()
{
    int n,i,sum=0,avg;
    scanf("%d",&n);

    i=1;
    while (i<=n)
    {

        sum=sum+i;
        avg=sum/n;
        i++;
    }
    printf("%d",avg);

    return 0;
}
