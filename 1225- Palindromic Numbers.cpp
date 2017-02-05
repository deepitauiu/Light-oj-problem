#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

long long int a,b,i,j,k,t;

long long int s1,s2;
cin>>t;
for(i=1;i<=t;i++)
{
cin>>s1;
a=s1;
s2=0;
while(s1!=0)
{
   s2=s2*10+s1%10;
   s1/=10;

}


if(s2==a)
{
cout<<"Case "<<i<<": "<<"Yes"<<endl;

}
else
cout<<"Case "<<i<<": "<<"No"<<endl;
}

return 0;

}
