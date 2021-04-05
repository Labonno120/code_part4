#include<iostream>
using namespace std;
int main()
{
    int n,m,i,count=0,k;
    cin>> n>> m;
    k=n+m;
    for(i=1;i<=k;i++)
    {
        if(n-i==0)
            break;
        if(m-i==0)
            break;
        count++;

    }

    if(count%2!=0)
        cout<<"Malvika";
    else
        cout<<"Akshat";

}
