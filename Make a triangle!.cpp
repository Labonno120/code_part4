#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll a[4],mx=INT_MIN,mn1,mn2;
    for(ll i=0;i<3;i++)
    cin>>a[i];
    sort(a,a+3);

    if(a[0]==a[1]&&a[1]==a[2])
        cout<<0<<endl;
    else{
    if((a[0]+a[1])<=a[2])
    {
        cout<<((a[2]-(a[1]+a[0]))+1)<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    }
}
