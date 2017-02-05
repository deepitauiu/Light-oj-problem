#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,k,n,t,x,y,e,o,r,c;
cin>>t;
for(i=1;i<=t;i++)
{
 cin>>k;
 j=sqrt(k);

 if(j*j!=k)
 {
 x=j+1;
 }
 else
 {x=j;
 j--;
 }

 y=k-j*j;

 if(x%2!=0)
 {
    if(y>x)
    {
    r=x;
    y=y-x;
    c=x-y;

    }
    else
    {
     c=x;

     r=y;
     if(r==0)
     r=x;

    }



 }

 else
 {

    if(y>x)
    {
       c=x;
       y=y-x;
       r=x-y;
    }
    else
    {
    r=x;

     c=y;
     if(c==0)
     c=x;

    }
 }







cout<<"Case "<<i<<": "<<c<<" "<<r<<endl;

}

return 0;


}
