#include<iostream>
using namespace std;
int main()
{

    int n,a,b,c,d,e;
    cin>> n;


        if(n>=100)
        {
          a=n/100+(n%100)/20+((n%100)%20)/10+(((n%100)%20)%10)/5+(((n%100)%20)%10)%5;
            cout<< a<<endl;
        }

        else if(n>=20&&n<100)
        {

            b=n/20+(n%20)/10+((n%20)%10)/5+(((n%20)%10)%5);
            cout<<b<<endl;

        }
        else if(n>=10&&n<20)
        {
            c=n/10+(n%10)/5+((n%10)%5);
            cout<< c<<endl;
        }
        else if(n>=5&&n<10)
        {
            d=n/5+(n%5);

            cout<< d<<endl;
        }
        else if(n<5)
        {
            e=(n%5);
            cout<< e<<endl;
        }

}
