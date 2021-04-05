#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i,count=0 ;
    int a[200];
    cin>> n>> p;


   for(i=0;i<p;i++)
    {
        cin >>a[i];

    }
    cin>> q;
    for(i=p;i<q+p;i++)
    {
        cin >> a[i];

    }
   sort(a,a+(p+q));




    for(i=0;i<p+q;i++)
    {
     if(a[i]!=a[i+1])
        count++;
    }

   if(count==n)
    cout << "I become the guy.";
   else
    cout << "Oh, my keyboard!";
}
