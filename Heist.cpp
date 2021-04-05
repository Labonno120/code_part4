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
    int n,ct=0;
    cin>>n;
    int arr[n];
    loop(i,n)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        ct+=arr[i+1]-arr[i]-1;
    }
    cout<<ct<<endl;
}
