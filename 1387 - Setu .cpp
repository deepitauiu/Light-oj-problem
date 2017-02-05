#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t1,t2,d=0,i,j,k;
    string s;
    cin>>t1;

    for(i=1; i<=t1; i++)
    {
    cout<<"Case "<<i<<":"<<endl;
    cin>>t2;
    d=0;
        for(j=1; j<=t2; j++)

        {

        cin>>s;
        if(s[0]=='d')
        {
           cin>>k;
           d+=k;

        }
        else
        cout<<d<<endl;
        }
    }

    return 0;

}
