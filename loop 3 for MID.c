#include<stdio.h>
int main(){
    int n,i,x=2;
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        if(x%2==0)
        {
            printf("%d ",x);
            i++;
        }
        x+=2;
    }
    return 0;




}
