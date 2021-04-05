#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    tc(t)
    {
        ll n,m,sum=0;
        cin>>n>>m;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<m)cout<<sum<<endl;
        else cout<<m<<endl;
    }
}
