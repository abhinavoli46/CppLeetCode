//This program distribute n items into k elements subsets such that we get maximum distinct items in a subset.
// if arr[] = {1,1,2,4,6,2} and k is multiple of n. We need to find count of distinct elements in the subset of max length k.

#include<bits/stdc++.h>
using namespace std;
int countDistinctInASubset(int *arr,int n,int k)
{
    int maxLimitOfElementsInASubset = n/k;
    unordered_set<int> us;
    for(int i = 0; i < n;i++)
    {
        us.insert(arr[i]);
    }
    int size = us.size();

    if(size >= n/k)
    {
        return n/k;
    }
    else
    {
        return size;
    }
}
int main()
{
    int arr[] = {1,1,1,1,1,1,1,1};
    cout << countDistinctInASubset(arr,8,4);
}