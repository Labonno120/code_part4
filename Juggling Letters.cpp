#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,sum=0,count=0,j,cnt=0;
    string str,s1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>str;
            for(j=0;str[j]!='\0';j++)
            s1.push_back(str[j]);
        }
        sort(s1.begin(),s1.end());
        //cout<<s1<<endl;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]!=s1[i+1])
            {
                cnt++;
                if((i+1)%n==0)count++;

            }
        }
        //cout<<"count="<<count<<endl;
        //cout<<"cnt="<<cnt<<endl;
        if(count==cnt)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        count=0;
        cnt=0;
        s1.clear();
    }
}
