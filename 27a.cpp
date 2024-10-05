// In merge sort array is divide into two halfes and then sort them after that merge them
// For mergeing time complexity is O(n)
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N]; // to not pass array in recursion
void merge(int l, int r, int mid)
{
    int l_sz = mid - l + 1;
    int L[l_sz + 1];
    int r_sz = r - mid;
    int R[r_sz + 1];
    for (int i = 0; i < l_sz; i++)
    {
        L[i] = a[i + l];
    }
    for (int i = 0; i < r_sz; i++)
    {
        R[i] = a[i + mid + 1];
    }
    L[l_sz] = R[r_sz] = INT_MAX; // for say one array finished another remaining ,put the remaining elements as it by comparing it with INT_MAX
    int l_i = 0;
    int r_i = 0; // these both keep the track of left and right indexes
    //the below for loop for merge
    for (int i = l; i <= r; i++)
    {
    // make the a array sorted
        if (L[l_i] <= R[r_i])
        {
            a[i]=L[l_i];
            l_i++;
        }
        else{
            a[i]=R[r_i];
            r_i++;
        }
    }
}

//below function gets sorted array
void mergesort(int l,int r){
    if(l==r) return;//base condition
    int mid=(l+r)/2;
    mergesort(l,mid);//sort l to mid part
    mergesort(mid+1,r);
    merge(l,r,mid);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}