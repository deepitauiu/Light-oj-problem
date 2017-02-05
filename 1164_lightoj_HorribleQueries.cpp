#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>
#define mx 100009

using namespace std;


long long int tree[mx * 4];
long long int arr[mx];
long long int lazy[mx*4];//sum ছাড়াও নিচে অতিরিক্ত কত যোগ হচ্ছে সেটা রাখবো prop এ

void update(int node, int start, int end, int l, int r, int val)
{



    if(lazy[node] != 0)
    {
        // This node needs to be updated
        tree[node] += (end - start + 1) * lazy[node];    // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  // Mark child as lazy
            lazy[node*2+1] += lazy[node];                // Mark child as lazy
        }
        lazy[node] = 0;                                  // Reset it
    }

    if(start > end || start > r || end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l && end <= r)
    {
        // Segment is fully within range
        tree[node] += (end - start + 1) * val;
        if(start != end)
        {
            // Not leaf node
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    int mid = (start + end) / 2;
    update(node*2, start, mid, l, r, val);        // Updating left child
    update(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = tree[node*2] + tree[node*2+1];        // Updating root with max value
}

long long int query(int node, int start, int end, int l, int r)
{
    if(start > end || start > r || end < l)
        return 0;         // Out of range
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        tree[node] += (end - start + 1) * lazy[node];            // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];         // Mark child as lazy
            lazy[node*2+1] += lazy[node];    // Mark child as lazy
        }
        lazy[node] = 0;                 // Reset it
    }
    if(start >= l && end <= r)             // Current segment is totally within range [l, r]
        return tree[node];
    int mid = (start + end) / 2;
    long long int p1 = query(node*2, start, mid, l, r);         // Query left child
    long long int p2 = query(node*2 + 1, mid + 1, end, l, r); // Query right child
    return (p1 + p2);
}

int main()
{

    int n,i,t,j,k,q,a,b,x,y,z,v;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        memset(tree,0,sizeof(tree));
        memset(lazy,0,sizeof(lazy));


        scanf("%d %d",&n,&q);


        printf("Case %d:\n",i);

        for(j=1; j<=q; j++)
        {
            scanf("%d",&x);
            if(x==0)
            {
                scanf("%d %d %d",&x,&y,&v);
                x+=1;
                y+=1;
                z+=1;
                // z=query(1,1,n,x,y);
                //update(1,1,n,x,y,-z);
                update(1,1,n,x,y,v);


            }
            else
            {

                scanf("%d %d",&x,&y);
                x+=1;
                y+=1;

               long long int ans =query(1,1,n,x,y);


                printf("%lld\n",ans);

            }

        }


    }

    return 0;
}
