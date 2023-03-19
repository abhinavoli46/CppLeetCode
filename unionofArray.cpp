//Find the Union of two unsorted arrays. Assume that the arrays are unique and any single array does not contain repeated items.
#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int* setOne,int*setTwo,int size1,int size2)
{
    unordered_set<int> s1;
    for(int i = 0;i<size1;i++)
    {
        s1.insert(setOne[i]);
    }

    for(int i = 0;i<size2;i++)
    {
        if(s1.find(setTwo[i]) == s1.end())
        {
            s1.insert(setTwo[i]);
        }
    }
    vector<int> res(s1.begin(),s1.end());
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
    
    vector<int> result = findUnion(setOne,setTwo,size1,size2);
    for(auto x : result)
    {
        cout << x << " ";
    }
    return 0;
}