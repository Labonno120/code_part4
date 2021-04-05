#include<iostream>
using namespace std;
int main()
{
    string s;
    int n,count_1=0,count_2=0,i;
    cin >> s;
    n = s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
            count_1++;
        else
            count_2++;
    }
    if(count_1>count_2)
        cout<< n;
    else
        cout<<count_1+(count_1-1);
}
