#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a[5]={5,7,5},mark=0,vwl=0;
    for(int i=0;i<3;i++)
    {
        char c;
        cin>>c;
        string s;
        getline(cin,s);
        s=c+s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
                vwl++;
        }
        if(a[i]!=vwl)mark=1;
        vwl=0;
    }
    if(mark)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
