#include<bits/stdc++.h>
using namespace std;

int countMaxItems(vector<int> v,int n,int money)
{
    int count = 0;
    priority_queue<int,vector<int>,greater<int>> pq(v.begin(),v.end());
    while(money >= pq.top())
    {
        money -= pq.top();
        count++;
        pq.pop();
    }
    return count;
}
int main()
{
    int n_Items,cost,money;
    vector<int> v;
    cout << "\nEnter no of items : ";
    cin >>n_Items;
    cout << "\nEnter money : ";
    cin >> money;
    while(n_Items--)
    {
        cin >> cost;
        v.push_back(cost);
    }
    cout <<"\nTotal Items that can be purchased : " << countMaxItems(v,n_Items,money);
    return 0;
}