#include<iostream>
using namespace std;
int main()
{
    int i,n,m,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=m;j++)
                cout<< "#";
                cout<<endl;
        }
        else
        {
            if((i/2)%2!=0)
            {
                for(j=1;j<=m-1;j++)
                    cout<< ".";
                    cout<<"#";
                    cout<<endl;
            }
            else
            {
                cout<<"#";
                for(j=1;j<=m-1;j++)
                    cout<< ".";
                    cout<<endl;
            }
        }
    }
}
