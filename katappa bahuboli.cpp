#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) ll t;cin>>t;while(t--)
#define pi 2*acos(0.0)
#define N ((int)(1e6+2))
using namespace std;
void seive(int);
 vector<int>prime;
 bool mark[N];
void sieve(ll n)
{
    ll cnt=0;

   for(int i=3; i*i<=n; i+=2)
   {
       if(mark[i]==0)
       {
           for(int j=i*i; j<=n; j+=i+i)
           {
               mark[j]=1;
           }
       }
   }
   //prime.push_back(2);
   //cout<<"2"<<" ";

   for(int i=3; i<=n; i+=2)
   {
       if(mark[i]==0)
       {
           prime.push_back(i);
           cout<<i<<" ";
           cnt++;
       }
   }
   cout<<cnt<<endl;
   cout<<(n-(cnt-2))-1<<endl;
}
int main()
{
    tc(t)
    {
        ll n;
        cin>>n;
        if(n==1)cout<<"0"<<endl;
        //else if(n==7||n==6){
            //cout<<"5"<<endl;
       // }
             else if(n==5){
            cout<<"4"<<endl;
        }
              else if(n==4){
            cout<<"3"<<endl;
        }
               else if(n==3){
            cout<<"2"<<endl;
        }
               else if(n==2){
            cout<<"1"<<endl;
        }

       else if(n>5){sieve(n);
       }


    }
}
