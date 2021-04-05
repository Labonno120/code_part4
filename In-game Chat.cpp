#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"Yes"<<endl;
#define out_n cout<<"No"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    tc(t)
    {
        ll n,c1=0;
        cin>>n;
        char s[n];
        scanf("%s",s);
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]==')')
                c1++;
            else{
                break;
            }

           // cout<<c1<<endl;
        }
        if(c1>n-c1)
        {
            out_y;
        }
        else{out_n;}
    }
}
