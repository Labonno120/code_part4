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

    ll n,m,type,pos,one=0,zero=0,minus_one=0;
    vector<ll>vc;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)one++;
        else zero++;
    }
    //sort(a,a+n,greater<int>());
    for(ll i=0;i<m;i++)
    {
        cin>>type;
        cin>>pos;
        if(type==1)
        {
            if(a[pos-1]==1){
                a[pos-1]--;
                one--;
                zero++;
            }
            else{
                a[pos-1]++;
                zero--;
                one++;
            }



        }
        else{
        if(pos<=one)
            cout<<1<<endl;

        else if(one<pos&&one+zero>=pos)
            cout<<0<<endl;

        }
    }
}

