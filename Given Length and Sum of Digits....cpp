#include<iostream>
using namespace std;
int main()
{
    int m,s,p,tm,i,j,cnt=0;
    string mx,mn,mni;
    cin>>m>>s;
    if(s==0)
    {
        cout<<((m==1)?"0 0":"-1 -1")<<endl;
    }
    else{
    for( i=0;i<m;i++)
    {
        tm=min(9,s);
        s-=tm;
        mx.push_back('0'+tm);//ekhane int type theke string type e niye mx string e value neya hoiche
    }
    if(s>0){
        cout<<"-1 -1"<<endl;
        return 0;
    }
    for(j=m-1;j>=0;j--)
    {
        if(mx[j]=='0')cnt++;
        mn.push_back(mx[j]);
    }
    //cout<<"mn="<<mn<<endl;
    mn[0]++;
    mn[cnt]--;


    cout<<mn<<" "<<mx<<endl;
    }
}
