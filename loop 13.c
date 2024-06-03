#include<stdio.h>
int main()
{
    int n,i,x,mx;
    scanf("%d",&n);
    mx=0;
    i=1;
    while (i<=n)
    {
        scanf("%d",&x);
        if (mx<x)
            mx=x;
        i++;
    }
    printf("%d",mx);
    return 0;

}
