#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string n;
    bool flag=0;
    cin>>n;
    if(n[0]=='4')
    {
            cout<<"NO"<<endl;
            return 0;

    }
    for(int i=0;i<n.size();)
    {
        if(n[i]=='1'&&n[i+1]=='4'&&n[i+2]=='4')
        {
            i+=3;
        }
        else if(n[i]=='1'&&n[i+1]=='4')
        {
           i+=2;
        }
        else if(n[i]=='1')
        {
           i++;
        }


        else
        {
            cout<<"NO"<<endl;
            flag=1;
            break;
        }

    }
    if(flag==0)
    cout<<"YES"<<endl;
}
