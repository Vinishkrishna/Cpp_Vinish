#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

// Disjoint Set Union (DSU) implementation for "City and Campers" problem
int parent[N];
int sz[N]; // Renamed from 'size' to 'sz'
multiset<int> sizes;//at any point stores groups sizes

void make(int v) {
    parent[v] = v;
    sz[v] = 1;
    sizes.insert(1);
}

int find(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find(parent[v]); // Path compression
}

void merge(int a,int b){
    // sizes.erase(size[a]);It all the instances of size[a]
    sizes.erase(sizes.find(sz[a]));//it will delete one instance
    sizes.erase(sizes.find(sz[b]));
    sizes.insert(sz[a]+sz[b]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        // Union by size
        if (sz[a] < sz[b]) 
            swap(a, b);
        parent[b] = a;
        merge(a,b);
        sz[a] += sz[b];
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        make(i);
    }
    while (q--) {
        int u, v;
        cin >> u >> v;
        Union(u, v);
        if (sizes.size()==1)
        {
            cout<<0<<endl;
        }
        else{
            int mn=*(sizes.begin());
            int mx=*(--sizes.end());
            cout<<mx-mn<<endl;
        }
    }
}
/*
Input:
2 1
1 2
Output:0
*/