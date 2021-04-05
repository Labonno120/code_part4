#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,mark=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }


        if(a[0]<b[0])cout<<"NO"<<endl;
        else if(n==1)cout<<"YES"<<endl;
        else{
        for(int i=1;i<n;i++){
            if(a[i]<b[i])
                mark=1;
            if(a[i]<a[i-1])
                mark=1;
            if(b[i-1]>b[i])
                mark=1;
            if(b[i]-b[i-1]>a[i]-a[i-1])
                mark=1;
        }
        if(mark==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }

    }
}
