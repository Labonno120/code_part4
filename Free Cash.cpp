    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {

        int t;
        cin>>t;

        int cnt=0,mx=0,h,m;
        int arr[24][60]={0};
        for(int i=0;i<t;i++)
        {
            cin>>h>>m;
            arr[h][m]++;
            if(arr[h][m]>mx)
                mx=arr[h][m];
            //cout<<"mx="<<mx<<endl;
        }

        cout<<mx<<endl;
    }
