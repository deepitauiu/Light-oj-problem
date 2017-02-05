#include<bits/stdc++.h>
using namespace std;
int main()
{

int i,j,k=0,t,n,A[100000],b[10000];
for(i=1;i<=1000;i++)
{


    for(j=1;j<=i;j++)
    {
    if(i%j==0)
    A[i]++;


    }

    if(A[i]>k)
    k=A[i];

}
k=1;
for(i=1;i<=32;i++)
{
      for(j=1000;j>=1;j--)
      {
          if(A[j]==i)
          {
            b[k]=j;
            k++;
          }
      }
}
cin>>t;
for(i=1;i<=t;i++)
{
 cin>>k;
cout<<"Case "<<i<<": "<< b[k]<<endl;

}



return 0;


}
