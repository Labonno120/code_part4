#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    tc(t)
    {
        int n,cnt=0;
        bool flag=0;
        cin>>n;
        int arr[n];
        vector<int>vc;
        loop(i,n)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]==1)
        {
            loop(i,n)
            {
                if(arr[i+1]-arr[i]==0||arr[i+1]-arr[i]==1)
                {
                    if(flag)vc.push_back(arr[i+1]);
                    else{
                        vc.push_back(arr[i]);
                        vc.push_back(arr[i+1]);
                        flag=1;
                    }
                }
                else flag=0;
             }
             cout<<vc.size()+1<<endl;
        }
        else {
            cout<<"1"<<endl;
        }

        }

}
