#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i,j,q,count=0,num,ans;
    cin>>n;
    ll arr[n+1];
    for(i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    cin>>q;

    for(i=0;i<q;i++){
        cin>>num;
        ans=upper_bound(arr,arr+n,num)-arr;
        cout<<ans<<endl;
    }


}



