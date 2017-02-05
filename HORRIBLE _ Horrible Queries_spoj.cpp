#include<bits/stdc++.h>
#include<iostream>
#define mx 1000001
using namespace std;
int arr[mx];
struct info {

unsigned long long int prop, sum;
} tree[mx * 4]; //sum à¦�à¦¾à§�à¦¾à¦� à¦¨à¦¿à¦�à§� à¦�à¦¤à¦¿à¦°à¦¿à¦�à§�à¦¤ à¦�à¦¤ à¦¯à§�à¦¾à¦� à¦¹à¦�à§�à¦�à§� à¦¸à§�à¦�à¦¾ à¦°à¦¾à¦�à¦¬à§�à¦¾ prop à¦�




// better use scanf printf ...faster otherwise tle occures
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node].sum = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
}
unsigned long long int query(int node, int b, int e, int i, int j, unsigned long long int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (min(e,j) - max(b,i) + 1); //à¦¸à¦¾à¦® à¦�à¦° à¦¸à¦¾à¦¥à§� à¦¯à§�à¦¾à¦� à¦¹à¦¬à§� à¦¸à§�à¦� à¦°à§�à¦�à§�à¦�à§�à¦° à¦¸à¦¾à¦¥à§� à¦�à¦¤à¦¿à¦°à¦¿à¦�à§�à¦¤ à¦¯à¦¤ à¦¯à§�à¦¾à¦� à¦�à¦°à¦¤à§� à¦¬à¦²à§�à¦�à§� à¦¸à§�à¦�à¦¾

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

   unsigned long long int p1 = query(Left, b, mid, i, j, carry + tree[node].prop); //à¦ªà§�à¦°à¦ªà¦¾à¦�à§�à¦� à¦­à§�à¦¯à¦¾à¦²à§� à¦¬à§�à§� à¦¨à¦¿à§�à§� à¦¯à¦¾à¦�à§�à¦�à§� carry à¦­à§�à¦¯à¦¾à¦°à¦¿à§�à§�à¦¬à¦²
  unsigned long long  int p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}
void update(int node, int b, int e, int i, int j, unsigned long long int x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j) //à¦¨à§�à¦¾à¦¡à§�à¦° à¦°à§�à¦�à§�à¦� à¦�à¦ªà¦¡à§�à¦�à§�à¦° à¦°à§�à¦�à§�à¦�à§�à¦° à¦­à¦¿à¦¤à¦°à§�
    {
        tree[node].sum += ((e - b + 1) * x); //à¦¨à¦¿à¦�à§� à¦¨à§�à¦¾à¦¡ à¦�à¦�à§� e-b+1 à¦�à¦¿, à¦¤à¦¾à¦� e-b+1 à¦¬à¦¾à¦° x à¦¯à§�à¦¾à¦� à¦¹à¦¬à§� à¦�à¦� à¦°à§�à¦�à§�à¦�à§�
        tree[node].prop += x; //à¦¨à¦¿à¦�à§�à¦° à¦¨à§�à¦¾à¦¡à¦�à§�à¦²à§�à¦¾à¦° à¦¸à¦¾à¦¥à§� x à¦¯à§�à¦¾à¦� à¦¹à¦¬à§�
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
    //à¦�à¦ªà¦°à§� à¦�à¦ à¦¾à¦° à¦¸à¦®à§� à¦ªà¦¥à§�à¦° à¦¨à§�à¦¾à¦¡à¦�à§�à¦²à§�à¦¾ à¦�à¦ªà¦¡à§�à¦� à¦¹à¦¬à§�
    //à¦¬à¦¾à¦® à¦�à¦° à¦¡à¦¾à¦¨ à¦ªà¦¾à¦¶à§�à¦° à¦¸à¦¾à¦® à¦�à¦¾à§�à¦¾à¦� à¦¯à§�à¦¾à¦� à¦¹à¦¬à§� à¦¨à¦¿à¦�à§� à¦�à¦¤à¦¿à¦°à¦¿à¦�à§�à¦¤ à¦¯à§�à¦¾à¦� à¦¹à¦�à§�à¦¾ à¦®à¦¾à¦¨
}
int main()
{

    int n,i,t,c,j,k,x,a,b,d;
     unsigned long long int value;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
     scanf("%d",&n);
      scanf("%d",&c);

    for(i=0;i<=n;i++)
            arr[i]=0;
    init(1, 1, n);
    for(k=1;k<=c;k++)
    {
    scanf("%d",&x);
    if(x==0)
    {
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%llu",&value);
    update(1, 1, n, a, b,value);

    }
    else
    {
    scanf("%d",&a);
    scanf("%d",&b);
   printf("%llu\n",query(1,1,n,a,b));

    }
    }



    }

    return 0;
}
