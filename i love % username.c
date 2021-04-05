#include<stdio.h>
int main()
{
    int n,i,count=0,cnt=0,x,y[10001],max,min,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
         y[i]=x;

    }
    max=y[0];
    min=y[0];
    for(i=1;i<n;i++)
    {

        if(max<y[i])
        {
        count++;
        max=y[i];
        }

        if(min>y[i])
        {
            cnt++;
            min=y[i];
        }
    }

   z=count+cnt;

    printf("%d",z);


}
