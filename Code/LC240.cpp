#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int r=0, c=n-1;
        while(r<m && c>=0)
        {
            if(matrix[r][c]==target)
            {
                return true;
            }
            else if(matrix[r][c]>target)
            {
                c--;
            }
            else
            {
                r++;
            }
        }
        return false;
    }
};
int main()
{
    int m, n;
    cout << "enter the number of rows = ";
    cin >> m;
    cout << "enter the number of columns = ";
    cin >> n;
    vector<vector<int>> matrix(m,vector<int>(n));
    cout << "enter the elements of the matrix:\n";
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