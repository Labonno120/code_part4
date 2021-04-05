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

    tc(t)
    {
        ll n,k,i=1,j,b;
        cin>>n>>k;
        ll tm=k;
        if(k>=n)
        {
            ll ans1=ceil((float)k/n);
            cout<<ans1<<endl;
        }
        else{
                if(k==1)cout<<"1"<<endl;
                else{
                j=ceil((float)n/k);
                b=j*k;

                //cout<<k<<endl;
                ll ans2=ceil((float)b/n);
                cout<<ans2<<endl;
                }

        }

    }
}

