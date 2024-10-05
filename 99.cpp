#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
/*Path Compression,Union by size/rank*/
int parent[N];
int sz[N];//to store size of group
//Disjoint Set Union
/*
make->add a new independent node which is not connected any other
find->parent of group,independent nodes parent is itself
if 2->1 ,find of 2 is 1,find of 1 is 1.
if 4->3->1<-2,find of 4 is 1.
when group are joined its roots get joined
union->a U b
always try to add a small tree to a big tree,to reduce complexity
rank(depth) and size both time complexity is same-union by size or rank 
*/
void make(int v){
    parent[v]=v;
    sz[v]=1;
}

int find(int v){
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]);//path compression
}

void Union(int a,int b){
    a=find(a);//big tree will always remain in left
    b=find(b);
    if (a!=b)
    {
        //Union by size
        if(sz[a]<sz[b])
            swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}
//Reverse ackerman function increases slowly
int main(){
    int n,k;
    cin>>n>>k;
    for (int i = 0; i <=n; i++)
    {
        make(i);
    }
    while (k--)
    {
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }
    int connected_ct=0;
    for (int i = 1; i <=n; i++)
    {
        if(find(i)==i) connected_ct++;//how many roots,that many connected components
    }
}