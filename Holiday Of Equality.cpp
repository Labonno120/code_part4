#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,max;

    cin>> n;
    int array[n+1];
    for(i=0;i<n;i++)
    {
        cin>> array[i];
    }
    max=array[0];
    for(i=1;i<n;i++)
    {
        if(array[i]>max)
            max=array[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(max-array[i]);
    }
    cout<< sum;
}
