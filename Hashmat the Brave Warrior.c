#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b))
    {
        if(a>b)
            printf("%d\n",a-b);
        else
            printf("%d\n",b-a);
    }


    return 0;
}