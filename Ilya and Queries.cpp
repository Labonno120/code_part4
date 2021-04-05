#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,i,count=0,ar[100001];
    string s;
    cin>>s;
    cin>>n;
    for(i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])count++;
        ar[i]=count;
        //cout<<"ar="<<ar[i]<<count<<endl;
    }
    while(n--)
    {
        cin>>l>>r;
        cout<<ar[r-1]-ar[l-1]<<endl;

    }
}
