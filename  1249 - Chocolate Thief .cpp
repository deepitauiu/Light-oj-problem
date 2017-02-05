#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,n,T,N,sum,M,W,f,w,P,Q,c=1,max,min,l,h,flag=0;
    map<string,long long int> m;
    string s,theif,y;
    cin>>T;

    for(i=1; i<=T; i++)
    {
        cin>>n;
        flag=0;
        for(j=1; j<=n; j++)
        {
            cin>>s>>l>>w>>h;

            if(j==1)
            {
                max=l*w*h;
                min=l*w*h;
                theif=s;
            }
            else
            {

                if(max<(l*w*h) )
                {

                    flag=1;
                    max=l*w*h;

                    theif=s;

                }
                if(min>( l*w*h ))
                {
                flag=1;
                   min=l*w*h;
                   y=s;
                }
            }


        }
        if(flag!=0)
        cout<<"Case "<<i<<": "<<theif<<" took chocolate from "<<y<<endl;
        else
        cout<<"Case "<<i<<": "<<"no thief"<<endl;

    }

    return 0;
}
