#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            count++;
    }
    printf("%d",count);
}
