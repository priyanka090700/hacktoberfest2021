/*Kruskal's Algorithm*/

#include<stdio.h>
#define MAX 20

/* 
0 2 5 3 0 0
2 0 6 0 3 0
1 6 0 5 6 8
1 0 2 0 0 6
0 5 6 0 0 8
0 0 8 2 4 0

Minimum Spanning tree cost=13
Minimum Spanning tree edges ar
(0,2): 1 
(3,5): 2
(0,1): 3
(4,1): 3
(5,2): 4
*/
struct Edge{
	int u,v,w;
};
struct EdgeList{
	struct Edge e[MAX*MAX];
	int ne;
};
void MakeSet(int i,int parent[],int rank[]){
	parent[i]=i;
	rank[i]=0;
}
int FindSet(int x,int parent[]){
	if(x!=parent[x])
		parent[x]=FindSet(parent[x],parent);
	return parent[x];
}
void Link(int x,int y,int parent[],int rank[]){
	if(rank[x]>rank[y])
		parent[y]=x;
	else{
		parent[x]=y;
		if(rank[x]==rank[y])
			rank[y]=rank[y]+1;
	}	
}
void Union(int x,int y,int parent[],int rank[]){
	Link(FindSet(x,parent),FindSet(y,parent),parent,rank);
}
void SortEdge(struct Edge el[],int n){
	int i,j;
	struct Edge temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(el[i].w>el[j].w){
				temp=el[i];
				el[i]=el[j];
				el[j]=temp;
			}
		}
	}
}
void Kruskal(int wt[MAX][MAX],int n){
	int i,j,k,parent[MAX],rank[MAX],mincost;
	struct EdgeList elist,spanlist;	
	elist.ne=spanlist.ne=0;
	mincost=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(wt[i][j]!=0){
				elist.e[elist.ne].u=i;
				elist.e[elist.ne].v=j;
				elist.e[elist.ne].w=wt[i][j];
				elist.ne++;
			}
		}
	}
	for(i=0;i<n;i++)
		MakeSet(i,parent,rank);
	SortEdge(elist.e,elist.ne);
	for(i=0;i<elist.ne;i++){
		j=FindSet(elist.e[i].u,parent);
		k=FindSet(elist.e[i].v,parent);
		if(j!=k){
			spanlist.e[spanlist.ne]=elist.e[i];
			spanlist.ne++;
			Union(j,k,parent,rank);
		}
	}
	printf("Edges in spanning tree are\n");
	for(i=0;i<spanlist.ne;i++){
		printf("(%d,%d):   %d\n",spanlist.e[i].u,spanlist.e[i].v,spanlist.e[i].w);
		mincost=mincost+spanlist.e[i].w;
	}
	printf("Minimum cost is %d",mincost);
}
int main()
{
	int i,j,n,w[MAX][MAX];
	printf("How many nodes: ");
	scanf("%d",&n);
	printf("Enter the weight matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%d",&w[i][j]);
	}	
	Kruskal(w,n);	
	return 0;
}
