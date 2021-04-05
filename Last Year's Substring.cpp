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
        ll mark=0;
        ll n;
        cin>>n;
        string a;
        cin>>a;
        if(a[0]=='2'&&a[n-3]=='0'&&a[n-2]=='2'&&a[n-1]=='0')
            mark=1;
        else if(a[0]=='2'&&a[1]=='0'&&a[n-2]=='2'&&a[n-1]=='0')
            mark=1;
        else if(a[0]=='2'&&a[1]=='0'&&a[2]=='2'&&a[n-1]=='0')
              mark=1;
         else if(a[0]=='2'&&a[1]=='0'&&a[2]=='2'&&a[3]=='0')
              mark=1;
         else if(a[n-4]=='2'&&a[n-3]=='0'&&a[n-2]=='2'&&a[n-1]=='0')
              mark=1;
        if(mark==1)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
