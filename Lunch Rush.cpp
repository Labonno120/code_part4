#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k,mx=INT_MIN,tm;
    cin>>n>>k;
    while(n--)
    {
        ll f,t;
        cin>>f>>t;
        if(t>k)
            tm=f-(t-k);
        else
            tm=f;
        mx=max(mx,tm);
    }
    cout<<mx<<endl;
}
