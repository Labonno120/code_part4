#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,mx_=-1,ans = 0,cnt0=0,cnt_=0;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0){
            cnt_++;
        }
        else if(arr[i]==0)
            cnt0++;

    }
    sort(arr,arr+n);
    if(n==1)
    {
        if(arr[0]<=0)
        cout<<abs(arr[0])+1<<endl;
        else
            cout<<arr[0]-1<<endl;
        return 0;

    }
    else if(cnt0==n){
        cout<<cnt0<<endl;
        return 0;
    }
    else if(cnt_%2!=0)
    {
        if(cnt0==0){
        ans+=abs(-1+(arr[0]));
        for(int i=1;i<n;i++)
        {
            if(arr[i]<0)
            ans+=abs(-1-(arr[i]));
            else
                ans+=abs(arr[i]-1);
        }
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            ans+=abs(-1-(arr[i]));
            else
                ans+=abs(arr[i]-1);
        }

        }
    }
    else{
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            ans+=abs(-1-(arr[i]));
            else
                ans+=abs(arr[i]-1);
        }

    }
    cout<<ans<<endl;
}
