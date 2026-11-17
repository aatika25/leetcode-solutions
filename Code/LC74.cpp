#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int sR=0, eR=m-1;
        while(sR<=eR)
        {
            int midR=sR+(eR-sR)/2;
            if(target<=matrix[midR][n-1] && target>=matrix[midR][0])
            {
                int s=0, e=n-1;
                while(s<=e)
                {
                    int mid=s+(e-s)/2;
                    if(target==matrix[midR][mid])
                    {
                        return true;
                    }
                    else if(target<matrix[midR][mid])
                    {
                        e=mid-1;
                    }
                    else
                    {
                        s=mid+1;
                    }
                }
                return false;
            }
            else if(target>matrix[midR][n-1])
            {
                sR=midR+1;
            }
            else
            {
                eR=midR-1;
            }
        }
        return false;
    }
};
int main()
{
    int m, n;
    cout << "number of rows in matrix = ";
    cin >> m;
    cout << "number of columns in matrix = ";
    cin >> n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix[i][j];
        }
    }
    int target;
    cout << "target = ";
    cin >> target;
    Solution s;
    if(s.searchMatrix(matrix,target))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}