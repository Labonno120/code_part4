#include<iostream>
using namespace std;
#define lli long long
int main()
{
    lli t,i,j,k,n,count,mini_a,mini_b;

    cin>> t;
        while(t--)
        {
            cin>>n;
            lli a[n+1],b[n+1];
            for(i=0;i<n;i++)
                cin>>a[i];
            for(i=0;i<n;i++)
                cin>>b[i];
                mini_a=a[0];
                mini_b=b[0];
            for(j=0;j<n;j++)
            {
                if(mini_a>a[j])mini_a=a[j];
            }
            for(j=0;j<n;j++)
            {
                if(mini_b>b[j])mini_b=b[j];
            }
            //cout<<mini_a<<" " <<mini_b<<endl;
            count=0;
            for(k=0;k<n;k++){
            if(a[k]-mini_a==b[k]-mini_b||a[k]-mini_a>b[k]-mini_b)
                count+=(a[k]-mini_a);

            else
                count+=(b[k]-mini_b);

        }
        cout<<count<<endl;
    }
}
