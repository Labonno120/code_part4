#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string n;
    cin>>n;
    cout<<n;
    //reverse(n.begin(),n.end());
    for(int i=n.size()-1;i>=0;i--)
    cout<<(n[i]);
}
