#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,ro=0,co=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n/2;i++)
        ro+=a[i];
    for(ll i=n/2;i<n;i++)
        co+=a[i];
    cout<<ro*ro+co*co<<endl;
}

