#include<iostream>
using namespace std;
int main()
{
    int array[101];
    int i,temp,n,j;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {

        if(array[j]>array[j+1])
        {
            temp= array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
