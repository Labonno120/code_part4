#include<stdio.h>
int main()
{
    int n,i,a;
    char str[101];
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
           a=1;
           break;
        }
        else
        a=0;
    }
    if(a==1)
        printf("YES");
    else
        printf("NO");
}
