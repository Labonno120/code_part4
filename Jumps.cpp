#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll a,b,i=1,c=0;
        bool flag=0;
        cin>>a;
        ll tm=a;
        while(a>=0)
        {
            if(a==0)
            {
                flag=1;
                break;
            }
            a-=i;
            i++;
            c++;
        }


        if(flag==1)
        cout<<c<<endl;
        else{
        if((c*(c+1))/2>=tm+2)
        cout<<c<<endl;
        else
        {
            cout<<c+1<<endl;
        }
        }

    }
}

