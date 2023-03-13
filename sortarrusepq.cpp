#include<bits/stdc++.h>
using namespace std;

vector<int> sortUsingPriorityQueue(vector<int> v)
{
    vector<int> res;
    priority_queue<int,vector<int>,greater<>> pq(v.begin(),v.end());

    while(!pq.empty())
    {
        res.push_back(pq.top());
        pq.pop();
    }
    return res;
}
int main()
{
    vector<int> v = {3,4,6,1,2};
    vector<int> res = sortUsingPriorityQueue(v);
    for(auto x : res)
    {
        cout << x << " ";
    }
    return 0;
}