#include<stdio.h>
int main()
{
    int n,i,max,count=0,x;
    scanf("%d",&n);
    int z[n+1],y[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);

    }
    for(i=0;i<n;i++)
    {
        if(y[i]<=y[i+1])
        {
            count++;
            z[i]=count;
        }
        else
        {
           count=0;
           z[i]=count;
        }

    }
        if(n==1)
        printf("%d",n);
     else{
        max=z[0];
     for(i=1;i<n-1;i++)
    {

        if(z[i]>max)
        max=z[i];
    }
    printf("%d",max+1);
     }

}
