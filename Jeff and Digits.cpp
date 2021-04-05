
#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll n,five=0,zero=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==5)five++;
        else zero++;
    }
    if(zero<1)cout<<"-1"<<endl;
    else {
            ll k=five/9;
            ll tm=k*9;
            if(five>=9){
            for(ll i=0;i<tm;i++)cout<<5;
            for(ll i=0;i<zero;i++)
                cout<<0;
            }
            else cout<<0<<endl;


    }
}

