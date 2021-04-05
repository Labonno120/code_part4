#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    double n,sum=0;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        sum+=(1.0/i);
    }
    cout<<sum<<endl;
}
