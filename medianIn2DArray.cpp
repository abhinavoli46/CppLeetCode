#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &matrix, int R, int C)
{
        //Initialize min and max element according to first row of matrix.
        int max = matrix[0][C-1];
        int min = matrix[0][0];
        
        //Run Loop form 1st row and while iterating change min and max accordingly.
        //This will give us min and max element of entire matrix.
        for(int i = 1;i < R;i++)
        {
            if(matrix[0][i] < min)
            {
                min = matrix[0][i];
            }
            if(matrix[i][C-1] > max)
            {
                max = matrix[i][C-1];
            }
        }
        
        //R*C will be total elements odd in number as dimentions are always odd 
        //Adding 1 and dividing by 2 will give us position of median.
        int originalPositionOfMedian = ((R*C)+1)/2;
        
        //Loop condition
        while(min < max)
        {
            //Find mid value using min and max
            int mid = (min + max)/2;
            
            //Count no of elements less than mid using upper_bound of mid. 
            int countOfLessThanMid = 0;
            
            for(int i = 0;i<R;i++)
            {
                countOfLessThanMid += upper_bound(&matrix[i][0],&matrix[i][0]+C,mid) - &matrix[i][0];
            }
            
            //If the count of less elememnt is less than the original position of median
            //change min to mid+1 and search in right half.
            if(countOfLessThanMid < originalPositionOfMedian)
            {
                min = mid + 1;
            }
            //If the count of less elememnt is greater than the original position of median
            //change min to mid+1 and search in left half. 
            else
            {
                max = mid;
            }
        }
        //We will come out of loop when max = min then return either min or max
       return max; 
        
    }

int main()
{
    vector<vector<int>> v = {{2,3,5},{1,5,6},{9,8,7}};

    int res = median(v,3,3);
    cout << res;
    return 0;
}

