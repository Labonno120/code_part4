#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int i,pos;
    string s1;
    string s2="qwertyuiop[asdfghjkl;zxcvbnm,./";
   // cout<<s2<<endl;
    cin>>ch;
    cin>>s1;
    if(ch=='R')
    {
        for(i=0;i<s1.size();i++)
        {
            pos=s2.find(s1[i]);
            cout<<s2[pos-1];
        }
    }
     else if(ch=='L')
    {
        for(i=0;i<s1.size();i++)
        {
            pos=s2.find(s1[i]);
            cout<<s2[pos+1];
        }
    }
}
