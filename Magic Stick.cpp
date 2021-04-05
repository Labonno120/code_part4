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
        ll x,y;
        cin>> x >> y;

        if(y <= x){
            out_y;
        }
        else
        {
            if(x==3)
            {
                out_n;
            }
            else if(x==2 && y==3)
            {
                out_y;
            }
            else if(x==2 && y!=3)
            {
                out_n;
            }
            else if(x==1)
            {
                out_n;
            }
            else
            {
                out_y;
            }
        }
    }

}



