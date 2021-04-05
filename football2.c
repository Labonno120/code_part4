#include<stdio.h>
int main()
{
    char a[101];
    int n,i,x;

    scanf("%s",a);
     n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i+2]==a[i+3]&&a[i+3]==a[i+4]&&a[i+4]==a[i+5]&&a[i+5]==a[i+6])
           {x=1;
           break;
           }
        else
           x=0;
    }
    if(x==1)
        printf("YES");
    else
        printf("NO");
}
