#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,d,t,i,j,k,f,i1,i2,i3,i4;
string sa,sb,sc,sd;
char ch;
cin>>t;
for(i=1;i<=t;i++)
{
   f=0;
   i1=0;
   i2=0;
   i3=0;
   i4=0;
   k=7;
   cin>>a>>ch>>b>>ch>>c>>ch>>d;
   for(j=0;j<=7;j++)
   {
   cin>>sa[j];
   if(sa[j]=='1')
   i1+=pow(2,k);
   k--;

   }
   cin>>ch;
   k=7;
   for(j=0;j<=7;j++)
   {
   cin>>sb[j];
   if(sb[j]=='1')
   i2+=pow(2,k);
   k--;

   }


   cin>>ch;
   k=7;
   for(j=0;j<=7;j++)
   {
   cin>>sc[j];
   if(sc[j]=='1')
   i3+=pow(2,k);
   k--;

   }
   cin>>ch;
   k=7;
   for(j=0;j<=7;j++)
   {
   cin>>sd[j];
   if(sd[j]=='1')
   i4+=pow(2,k);
   k--;

   }





  /* for(j=7;j>=0;j--)
   {
      if(sa[j]=='1')
      i1+=pow(2,k);
      if(sb[j]=='1')
      i2+=pow(2,k);
      if(sc[j]=='1')
      i3+=pow(2,k);
      if(sd[j]=='1')
      i4+=pow(2,k);
       k++;
   }*/

   if(i1==a&&i2==b&&i3==c&&i4==d)
   cout<<"Case "<<i<<": "<<"Yes"<<endl;
   else
   cout<<"Case "<<i<<": "<<"No"<<endl;
}


return 0;
}
