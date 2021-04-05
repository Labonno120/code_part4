#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll t;cin>>t;
   while(t--)
   {
       ll n,k;
       cin>>n>>k;
       if((n*k)%(n-1)==0)
        cout<<(n*k)/(n-1)-1<<endl;
       else
        cout<<(n*k)/(n-1)<<endl;
   }
}
