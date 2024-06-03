///Write a C program to count the odd and even numbers from a list of n numbers.

#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if (x%2==0)
            printf("EVEN");
        else
            printf("ODD");
    }
    return 0;
}
