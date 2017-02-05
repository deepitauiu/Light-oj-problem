#include<bits/stdc++.h>


using namespace std;

string s;
int arr[100009],i,j,k,q,t;
char ch;
void updat(int i,int j)
{

 int k;
 for(k=i;k<=j;k++)
 {
 if(arr[k]==0)
arr[k]=1;
else
arr[k]=0;

 }

}
int main()
{


scanf("%d",&t);
for(i=1;i<=t;i++)
{
printf("Case %d:\n",i);
cin>>s;

for(j=0;s[j]!='\0';j++)
arr[j]=s[j]-'0';


cin>>q;
for(k=1;k<=q;k++)
{

cin>>ch;
int x,y;
if(ch=='I')
{
scanf("%d",&x);
scanf("%d",&y);
x-=1;
y-=1;
updat(x,y);
}
else
{
scanf("%d",&x);
printf("%d",arr[x-1]);
}
}


}


return 0;

}
