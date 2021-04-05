#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

  ll n;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++)
  {
      cin>>a[i];
  }

  sort(a,a+n);

  ll tm=ceil(n/2.0);
  cout<<a[tm-1]<<endl;

}



