#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a,b,cnt=0;
    cin>>a>>b;
    while(a>0&&b>0)
    {
        if(a==1&&b==1)break;
        if(a>b)
        {
            a-=2;
            b+=1;
        }
        else{
            b-=2;
            a+=1;
        }
        cnt++;

    }
    cout<<cnt<<endl;
}
