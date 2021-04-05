#include<iostream>
using namespace std;
int main()
{
    long long int n,i,a,b,c,d;
    cin>> n;
    a=n/10;
    b=n/100;
    c=(n%100)%10;
    d=((n/100)*10)+c;
    if(a>d&&a>n)
        cout<<a<<endl;
    else if(n>d&&n>a)
        cout<<n<<endl;
    else
        cout<<d<<endl;


}
