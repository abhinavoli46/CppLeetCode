#include<bits/stdc++.h>
using namespace std;
vector<int> findIntersection(int* setOne,int* setTwo,int size1,int size2)
{
    unordered_set<int> um;
    vector<int> res;
    for (int i = 0; i < size1; i++)
    {
        /* code */
        um.insert(setOne[i]);
    }
    for(int i = 0;i < size2; i++)
    {
        if(um.find(setTwo[i])!=um.end())
        {
            res.push_back(setTwo[i]);
        }
        else
        {
            um.insert(setTwo[i]);
        }
    }
    return res;   

}
int main()
{
    int size1,size2;
    cout << "\nEnter size of first set : ";
    cin >> size1;
    cout << "\nEnter size of second set : ";
    cin >> size2;
    
    int* setOne = new int[size1];
    int* setTwo = new int[size2];
    cout << "\nEnter elements of first set : ";
    for (int i = 0; i < size1; i++)
    {
        cin >> setOne[i];
    }
    cout << "\nEnter the elements of second set : ";
    for(int i =0;i<size2;i++)
    {
        cin >> setTwo[i];
    }
    
    vector<int> result = findIntersection(setOne,setTwo,size1,size2);
    for(auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}