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
        int n,s;
        cin>>n;
        vector<pair<string , string> > v(n);
        for(int i=0;i<v.size();i++)
        {
            cin>>v[i].first >> v[i].second;
        }
        sort(v.begin(),v.end());
        s=unique(v.begin(),v.end())-v.begin();
        cout<<s<<endl;
        for(ll i=0;i<s;i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }


}


