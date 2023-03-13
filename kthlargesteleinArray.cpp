#include<bits/stdc++.h>
using namespace std;

int kthLargestElement(vector<int> v,int p)
{
    int res,i=0;
    priority_queue<int,vector<int>,greater<>> pq(v.begin(),v.end());
    if(p > v.size())
    {
        return -1;
    }
    else
    {
        while(i != p-1)
        {
            pq.pop();
            i++;
        }
    
        return pq.top();
    }
    
}


int main()
{
    vector<int> v = {3,4,6,1,2,5,9,7};
    int pos = 4;
    int res = kthLargestElement(v,pos);
    cout << res;
    return 0;
}