#include<iostream>
using namespace std;
int main()
{
    long long int n,x,cnt2=0,c;
    char a;
    cin>>n>>x;
    long long int cnt1=x;
    for(int i=0;i<n;i++)
    {
        cin>>a>>c;
        if(a=='+')
            cnt1+=c;
        else if(a=='-'&&cnt1>=c)
            cnt1-=c;
        else
            cnt2++;
    }
    cout<<cnt1<<" "<<cnt2<<endl;
}
