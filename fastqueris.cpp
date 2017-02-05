#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>
#define mx 100001
using namespace std;
int arr[mx];

vector<int>tree[mx*3];
vector<int>v;
bool myfunction (int i,int j)
{
    if(i==j)
    {

        v.push_back(i);

    }
    return (i==j);
}

//not complete

// better use scanf printf ...faster otherwise tle occures
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node].push_back(arr[b]);

        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].insert(tree[node].end(),tree[Left].begin(),tree[Left].end());

    tree[node].insert(tree[node].end(),tree[Right].begin(),tree[Right].end());


}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0; //বাইরে চলে গিয়েছে
    if (b >= i && e <= j)
    {
        v.insert(v.end(),tree[node].begin(),tree[node].end());
        return node;
    } //রিলেভেন্ট সেগমেন্ট
    int Left = node * 2; //আরো ভাঙতে হবে
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    v.insert(v.end(),tree[p1].begin(),tree[p1].end());
    v.insert(v.end(),tree[p2].begin(),tree[p2].end());
    return node;

}
int main()
{

    int n,i,t,q,j;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        scanf("%d%d",&n,&q);
        for(j=1; j<=n; j++)
        {

            scanf("%d",&arr[j]);


        }
        init(1, 1, n);

        for(int k=1; k<=q; k++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            v.push_back(arr[1]);
            x= query(1, 1, n, x, y);


            sort( v.begin(), v.end() );

            v.erase( unique( v.begin(), v.end()), v.end() );
            int s=v.size();
            for(j=0;j<=s;j++)
            {
            cout<<v[j]<<" ";
            }
   cout<<endl;
            printf("%d\n",s);
            v.clear();

        }


    }



    return 0;
}
