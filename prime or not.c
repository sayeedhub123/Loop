#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for (i=2;i<n;i++)
    {
        if(n%i==0)

        {
            printf("%d in not prime",n);
            break;
        }


    }
    if(i==n)
        printf("%d is Prime",n);


    return 0;
}
