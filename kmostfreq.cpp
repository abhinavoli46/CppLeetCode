#include<bits/stdc++.h>
using namespace std;

void kmostfrequent(vector<int> a,int k)
{
    unordered_map<int,int> u;
    for(auto x : a)
    {
        u[x]++;
    }

    vector<vector<int>>freq(u.size()+1);
    //If Order of Original array do matter
    for(int i = 0;i<freq.size();i++)
    {
        int f = u[a[i]];
        if(f!=-1)
        {
            freq[f].push_back(a[i]);
            //assigned -1 to indicate particular element of the array is traversed.
            u[a[i]] = -1;
        }
    }
    //if Order of Original array do not matter
    // for(auto x : u)
    // {
    //     freq[x.second].push_back(x.first);
    // }
    int count = 0;
    for(int i = freq.size()-1;i>=0;i--)
    {
        
        for(auto x : freq[i])
        {
            cout << x << " ";
            count++;

            if(k==count)
            {
                return;
            }
        }
    }
}
int main()
{
    int k;
    vector<int> a = {2,5,1,2,5,1,4,4,8};
    cout << "\nEnter k : ";
    cin >> k;
    kmostfrequent(a,k);
    return 0;
}