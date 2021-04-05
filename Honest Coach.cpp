#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t,n,i,j,mini,ans;
    cin>> t;
    for(i=0;i<t;i++)
    {
        cin>> n;
        int arr[n+1];
        for(j=0;j<n;j++)
        {
            cin>> arr[j];
        }
        sort(arr,arr+n);
        mini=arr[1]-arr[0];
        for(j=0;j<n-1;j++)
        {
            ans= arr[j+1]-arr[j];

            if(ans<=mini)
            mini=ans;

        }
        cout<< mini<< endl;
    }
}
