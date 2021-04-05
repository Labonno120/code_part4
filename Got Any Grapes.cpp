#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    bool flag=0;
    int  andrew_want , dmitry_want , michal_want;
    int green_graps , purple_graps , black_graps;
    cin>> andrew_want >> dmitry_want >> michal_want;
    cin>> green_graps >> purple_graps >> black_graps;
    if(andrew_want<=green_graps)
    {
        green_graps-=andrew_want;

        if(green_graps+purple_graps>=dmitry_want)
        {
            if((green_graps+purple_graps+black_graps)-dmitry_want>=michal_want)
            {
                flag=1;
            }

        }
    }

    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
