#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,cnt=0;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    ll tm=m/n;
    while(tm%2==0)
    {
            tm/=2;
            cnt++;
        //cout<<"tm="<<tm<<endl;
    }
    while(tm%3==0)
    {
            tm/=3;
            cnt++;
        //cout<<"tm="<<tm<<endl;
    }
    if(tm==1)
        cout<<cnt<<endl;
    else
        cout<<"-1"<<endl;
}
