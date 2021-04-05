#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    if((n-2)%3!=0)
    {
        cout<<1<<" "<<1<<" "<<n-2<<endl;
    }
    else
    {
        cout<<1<<" "<<2<<" "<<n-3<<endl;
    }

}


