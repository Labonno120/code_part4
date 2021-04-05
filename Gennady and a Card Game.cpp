#include<iostream>
using namespace std;
int main()
{
    int count=0;
    string s,s1,s2,s3,s4,s5;
    cin>>s;
    cin>>s1>>s2>>s3>>s4>>s5;

          if(s[0]==s1[0]||s[1]==s1[1]){
          count++;
        }
          if(s[0]==s2[0]||s[1]==s2[1]){
          count++;
          }
          if(s[0]==s3[0]||s[1]==s3[1]){
          count++;
            }
          if(s[0]==s4[0]||s[1]==s4[1]){
          count++;
         }
          if(s[0]==s5[0]||s[1]==s5[1]){
          count++;
          }
    if(count==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}
