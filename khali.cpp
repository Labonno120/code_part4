#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll mark=0;
    string s,tms,tmp,p,q;
    cin>>s;
    tms="a";
    tms+=s;
    tmp=tms;
    reverse(tms.begin(),tms.end());
    if(tms!=tmp){
        cout<<"YES"<<endl;
        cout<<tmp<<endl;
    }
    else {
            p+=s;
    p+="a";
    q=p;
    reverse(p.begin(),p.end());
    if(p!=q){
        cout<<"YES"<<endl;
        cout<<q<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    }


  }
}


