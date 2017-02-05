#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,t,n,m,f,b,p,c,digit;

    cin>>t;
    for(i=1; i<=t; i++)
    {
    c=0;
      cin>>n>>b;


       for(j=22; j>=0; j--)
      {
        p=pow(b,j);
         if(n>=p)
         {
         cout<<n<<" "<<c<<endl;
          n=n-p;
          c=j+1;
          break;


         }


      }
    digit=(c*(c-1))/2;
    cout<<"Case "<<i<<": "<<digit<<endl;


    }
    return 0;
}
