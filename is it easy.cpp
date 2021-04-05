#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,sum1=0,sum2=0;
    cin>>t;
    while(t--)
    {
       cin>>n;


          for(i=1;i<=n;i+=2)
          sum1=sum1+i;



          for(j=2;j<=n;j+=2)
          sum2=sum2+j;
       if(sum1>sum2)
            cout<<"Mahabub"<<endl;
       else
            cout<<"Jakaria"<<endl;
            //cout<<sum1<<endl;
            //cout<<sum2<<endl;
            sum1=0;
            sum2=0;
    }
}
