#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   int n,a,b;
   bool flag=0;
   cin>>n;
   pair<int , int>p[n];

   for(int i=0;i<n;i++)
   {
       cin>>p[i].first>>p[i].second;
   }
   sort(p,p+n);
   for(int i=0;i<n-1;i++){
    if(p[i].second>p[i+1].second){
        cout<<"Happy Alex"<<endl;
        flag=1;
        break;
    }
   }
   if(flag==0)
    cout<<"Poor Alex"<<endl;
}
