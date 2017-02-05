#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,ans,t,i,j,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {


        cin>>a>>b>>c;



        if(a*a+b*b==c*c|| a*a+c*c==b*b|| b*b+c*c==a*a)
        {
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;

    }
}




return 0;
}
