#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==n&&i%2!=0)
        {
          printf("I hate it ");
          break;
        }

        else if(i==n&&i%2==0)
        {
         printf("I love it ");
         break;
        }

        if(i!=n&&i%2!=0)
          printf("I hate that ");
        else if(i!=n&&i%2==0)
          printf("I love that ");
    }


}
