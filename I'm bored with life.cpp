#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int);
int main()
{
    int n,m,mn,ans;
    cin>>n>>m;
    mn=min(n,m);
    ans=fact(mn);
   /* for(;;){
    if(fact(max(n,m))%ans!=0)ans--;
    else break;
    }*/
    cout<<ans<<endl;
}
int fact(int n)
{
    if(n==1)return 1;
    return n*fact(n-1);
}
