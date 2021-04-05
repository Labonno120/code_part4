#include<stdio.h>
int main()
{
    int n,x,y,z[1001],i=0,count=0,a,j,cnt=0;
    scanf("%d",&n);
     if(n%4==0||n%7==0||n%47==0||n%74==0||n%44==0||n%77==0)
        a=1;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        z[i]=x;
        i++;
        count++;

    }
    for(j=0;j<count;j++)
    {

    if(z[j]==4||z[j]==7)
     cnt++;
   }

    if(a==1||count==cnt)
  printf("YES");
    else
    printf("NO");

}
