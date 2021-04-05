#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin>>n;
    ll a[n],v[n],u[n],sum1=0,sum2=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum1+=a[i];
        v[i]=sum1;
    }
    sort(a,a+n);
    for(ll j=0;j<n;j++)
    {
        sum2+=a[j];
        u[j]=sum2;
    }
    cin>>m;
    while(m--)
    {
        ll type,l,r,sum=0;
        cin>>type>>l>>r;
        if(type==1)
        {
            if(l==1)cout<<v[r-1]<<endl;
            else
            cout<<v[r-1]-v[l-2]<<endl;
        }
        else
        {
            if(l==1)cout<<u[r-1]<<endl;
            else
            cout<<u[r-1]-u[l-2]<<endl;
        }
    }

}
