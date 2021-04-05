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
    ll n,a[16]={0},p;
    cin>>n;
    string s;
    cin>>s;
    //cout<<endl;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            loop(j,10)
            {
                if(a[j]==0){
                    a[j]++;
                    break;
                }

            }
        }
        else if(s[i]=='R')
        {
            for(ll j=9;j>=0;j--)
            {
                if(a[j]==0)
                {
                    a[j]++;
                    break;
                }
            }
        }
        else{

            a[s[i]-'0']--;

        }
    }
    for(ll i=0;i<10;i++)cout<<a[i];
}
