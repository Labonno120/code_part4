#include<iostream>
#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=n;
        for(int i=1;i<=p;i++){
            cout<<n*2<<" ";
            n++;
        }
        cout<<endl;
    }

}
