#include<bits/stdc++.h>
using namespace std;
int adj[20][20];
void print_djistra(int key[], int x)
{
    int sum=0,i;
    for(i=1;i<=x;i++)
    {
        cout<<"VERTEX:"<<i<<"Min-Distance:"<<key[i]<<endl;
    }
    cout<<"\nMin weight is : "<<sum;
}
int min_key(int key[],bool mstset[], int x)
{
    int mn=9999999, min_index,i;
    for(i=1;i<=x;i++)
    {
        if(mstset[i]==false && key[i]<mn)
        {
            mn=key[i];
            min_index=i;
        }
    }
    return min_index;
}
void djistra(int x)
{
    int key[x+1],i,u,v;
    bool mstset[x+1];
    for(i=1;i<=x;i++)
    {
        key[i]=9999999;
        mstset[i]=false;
    }
    cout<<"Enter the starting vertex : ";
    cin>>v;
    key[v]=0;
    for(int count=0;count<x-1;count++)
    {
        int u=min_key(key,mstset,x);
        mstset[u]=true;
        for(v=1;v<=x;v++)
        {
            if(adj[u][v]!=0 && mstset[v]==false && key[u]!=9999999 && key[u]+adj[u][v])
            {
                key[v]=adj[u][v]+key[u];
            }
        }
    }
    print_djistra(key,x);
}
int main()
{
    int x,v,u,w,max_edges,i,j;
    cout<<"enter the nuber of vertices : ";
    cin>>x;
    max_edges=x*(x-1)/2;
    for(i=0;i<x;i++)
    for(j=0;j<x;j++)
    adj[i][j]=0;
    cout<<"Enter the edges and edge weights :\n";
    for(i=0;i<max_edges;i++)
    {
        cout<<"Origin and Dest (0,0) to exit :";
        cin>>u>>v;
        if(u==0 && v==0)
            break;
        else if(u>x || v>x || u<0 || v<0)
            {cout<<"Invalid path";i-=1;}
        else{
        cout<<"Enter the edge weight :";
        cin>>w;
        adj[u][v]=w;
        adj[v][u]=w;
        }
    }
    djistra(x);
}
