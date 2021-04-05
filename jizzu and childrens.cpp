#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    ll n,m,mx=INT_MIN,in=INT_MIN,ans,tms=0,get;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    if(mx<=m)
    {
        cout<<n<<endl;
    }
    else{
        for(ll i=0;i<n;i++)
        {
            if(a[i]>m)
            {
                ll tm=ceil((float)a[i]/m);
                //cout<<"tm="<<tm<<endl;
                if(tms<=tm){
                    tms=tm;
                    get=i;
                }
                a[i]-=(m*tm);
            }
        }
        cout<<get+1<<endl;
    }
}
