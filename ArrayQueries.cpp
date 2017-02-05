#include<cstdio>
#include<iostream>
#include<algorithm>
#include<limits.h>
#define mx 100001
using namespace std;

int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] =min(tree[Left],tree[Right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
        return tree[node]; //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min( p1 , p2); //বাম এবং ডান পাশের যোগফল
}

int main()
{

    int n,t,q,m,o;
    scanf("%d",&t);
    for(int test=1;test<=t;test++)
    {
        scanf("%d %d",&n,&q);
     for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1, 1, n);
        printf("Case %d:\n",test);
        for(int k=1;k<=q;k++)
        {
            scanf("%d %d",&m,&o);
            int res=query(1,1,n,m,o);


        printf("%d\n",res );
        }


    }
    return 0;
}
