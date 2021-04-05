#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(ll i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    tc(t)
    {
        map<ll,ll>mp;
        vector<ll>vc;
        set<ll>st;
        ll n;
        cin>>n;
        ll a[n];
        loop(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(ll i=0;i<n;i++)
        {
            if(mp[a[i]+1]==0)
            {
                a[i]=a[i]+1;


            }
            mp[a[i]]++;
            //cout<<a[i]<<" ";
            st.insert(a[i]);
        }
        cout<<st.size()<<endl;

    }
}
