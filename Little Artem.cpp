#include<iostream>
using namespace std;
int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<"W";
        for(i=0;i<m-1;i++)cout<<"B";
        cout<<endl;
        for(i=1;i<n;i++)
        {
            for(j=0;j<m;j++){
                cout<<"B";
            }
             cout<<endl;
        }

    }
}
