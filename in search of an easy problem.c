#include<stdio.h>
int main()
{
    int n,i,a[100],y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
    {
       if(a[i]==1)
       {
           y=1;
           break;
       }
       else
        y=0;
    }
    if(y==1)
        printf("HARD");
    else
        printf("EASY");
}
