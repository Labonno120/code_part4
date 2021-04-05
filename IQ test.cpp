#include<iostream>
using namespace std;

int main()
{
    int n,i,arr[101],count=0,cnt=0,p,q;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            p=i;
            count++;
        }
        else if(arr[i]%2!=0)
        {
           q=i;
           cnt++;
        }
    }
    if(cnt==1)
        cout<< q;
    else
        cout<< p;

}
