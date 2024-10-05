#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

// Disjoint Set Union (DSU) implementation for "City and Flood" problem
int parent[N];
int sz[N]; // Renamed from 'size' to 'sz'

void make(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find(parent[v]); // Path compression
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        // Union by size
        if (sz[a] < sz[b]) 
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        make(i);
    }
    while (k--) {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }

    int connected_ct = 0;
    for (int i = 1; i <= n; i++) {
        if (find(i) == i) connected_ct++; // Count connected components
    }

    cout << connected_ct << endl;
}
/*
Input:
4
2
1 2
4 1
Output:2
*/