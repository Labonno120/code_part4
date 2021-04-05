#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(k==0){
        if(arr[0]>=2)
        cout<<arr[0]-1<<endl;
        else
        cout<<"-1"<<endl;
    }
    else if(arr[k]==arr[k-1])
        cout<<"-1"<<endl;
    else
        cout<<arr[k-1]<<endl;
}
