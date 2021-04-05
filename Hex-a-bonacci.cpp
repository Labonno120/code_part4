#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
#define pi 2*acos(0.0)

using namespace std;
int fn(ll);

ll a, b, c, d, e, f;
int fn( ll n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;

    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
}
int main() {
        ll T;
        cin>>T;
        for(int i=1;i<=T;i++){
                ll n;
       cin>>a>>b>>c>>d>>e>>f>>n;
       cout<<"Case"<<" "<<i<<":"<<" ";
        cout<< fn(n) % 10000007<<endl;
    }
    return 0;
}



