#include<iostream>
using namespace std;
int main()
{
    int n,h[100],a[100],count=0,cnt=0,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
        cin>> h[i]>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(h[i]==a[j])
               {
               count++;
               }

        }
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(h[i]==a[j])
                {
                    cnt++;
                }
        }
    }
    k=count+cnt;
    cout<<k<<endl;
    //cout<<count<<endl;
    //cout<<cnt<<endl;

}
