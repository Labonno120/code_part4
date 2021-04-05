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
    tc(t)
    {
        int l,m;
        bool flag=0;
        cin>>l>>m;
        for(int i=1;;i++)
        {
            if(l%i>=i/2)
            {
                out_y;
                flag=1;
                break;
            }
            l++;
            if(l==m)break;
        }
        if(flag==0)
            out_n;
    }
}
