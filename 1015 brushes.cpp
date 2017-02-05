#include<bits/stdc++.h>
using namespace std;
int main()
{

long long int i,j,k,n,T,N,sum;
cin>>T;
for(i=1;i<=T;i++)
{
cin>>N;
sum=0;
while (N--)
{
cin>>k;
if(k>0)
sum+=k;
}


cout<<"Case "<<i<<": "<< sum<<endl;
}


return 0;

}
