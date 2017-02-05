#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{


    ll t1,t2,x1,y1,x2,y2,i,j,k,x,y;
    cin>>t1;
    for(i=1; i<=t1; i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<i<<":"<<endl;
        cin>>t2;
        for(j=1; j<=t2; j++)
        {
              cin>>x>>y;
              if(x>=x1&&x<=x2)
              {
                 if(y>=y1&&y<=y2)
                 {

                   cout<<"Yes"<<endl;
                 }
                 else
                     cout<<"No"<<endl;

              }
              else
              cout<<"No"<<endl;
        }

    }

    return 0;
}
