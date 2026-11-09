#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        for(vector<int> i:grid)
        {
            for(int j:i)
            {
                if(j<0)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
int main()
{
    int n, m;
    cout << "m x n matrix\n";
    cout << "grid.length (m) = ";
    cin >> m;
    cout << "grid[i].length (n) = ";
    cin >> n;
    cout << "enter the elements:\n";
    vector<vector<int>> grid(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> grid[i][j];
        }
    }
    Solution s;
    cout << s.countNegatives(grid);
}