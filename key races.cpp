#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a*b+2*d>a*c+2*e)
        cout<<"Second"<<endl;
    else if(a*b+2*d<a*c+2*e)
        cout<<"First"<<endl;
    else
        cout<<"Friendship"<<endl;
}
