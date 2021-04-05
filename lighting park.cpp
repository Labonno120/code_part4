#include<iostream>
using namespace std;
int main()
{
    int n,m,t,i,j,sum=0,sum1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        //if(n==1&&m==1)cout<<"1"<<endl;
        //else{
        if(n%2==0){
        for(i=0;i<n;i+=2){
            sum+=m;
            cout<<sum<<endl;
        }
        }
        else if(n%2!=0&&m%2!=0){
        for(j=0;j<n-1;j+=2)
        {
           sum+=m;
        }
        sum1=sum+(m/2+1);
        cout<<sum1<<endl;
        }
        else if(n%2!=0&&m%2==0)
        {
          for(j=0;j<n-1;j+=2)
        {
           sum+=m;
        }
        sum1=sum+(m/2);
        cout<<sum1<<endl;
        }


        ///}
        sum=0;


    }
}
