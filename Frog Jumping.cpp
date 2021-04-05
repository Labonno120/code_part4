#include<iostream>
using namespace std;
int main()
{
    long long int t,a,b,k,i,j,p,q;
    cin>>t;
    while(t--)
    {
        long long int sum=0;
        cin>>a>>b>>k;
        if(a==b&&k%2==0)cout<<"0"<<endl;
        else if(a==b&&k%2!=0)cout<<a<<endl;
        else{
        p=k-k/2;
        q=k/2;
        while(p--){
        sum+=a;
        }
        while(q--){
        sum-=b;
        }

        cout<<sum<<endl;
        }
    }
}
