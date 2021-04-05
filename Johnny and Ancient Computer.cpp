#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,i,cnt=0;
        cin>>a>>b;
        if(a<b)
          swap(a,b);
        while(b<a)
        {
            if(a/8>=b&&a%8==0)
                a/=8;
            else if(a/4>=b&&a%4==0)
                a/=4;
            else if(a/2>=b&&a%2==0)
                a/=2;
            else break;
            cnt++;
        }
        if(a==b)
        cout<<cnt<<endl;
        else
        cout<<"-1"<<endl;
    }
}
