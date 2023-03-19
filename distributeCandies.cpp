/*
Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor.
The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants 
to eat the maximum number of different types of candies while still following the doctor's advice.
Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she 
only eats n / 2 of them.
*/

#include <bits/stdc++.h>
using namespace std;
int distributeCandies(vector<int> &candyType)
{
    unordered_set<int> us(candyType.begin(), candyType.end());
    int count = 0;
    if (us.size() == 1)
    {
        count++;
        return count;
    }

    for (auto x : us)
    {
        if (count == candyType.size() / 2)
            break;
        else
            count++;
    }
    return count;
}
int main()
{
    vector<int> candySet;
    int size1,value;
    cout << "\nEnter size of candySet : ";
    cin >> size1;
    cout << "\nEnter the candies available : ";
    for (int i = 0; i < size1; i++)
    {
        cin >> value;
        candySet.push_back(value);
    }
    cout << distributeCandies(candySet); 
    return 0;
}