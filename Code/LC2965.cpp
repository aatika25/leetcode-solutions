#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2);
        unordered_set<int> m;
        int n=grid.size();
        int es=((n*n)*((n*n)+1))/2, as=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(m.find(grid[i][j])!=m.end())
                {
                    ans[0]=grid[i][j];
                }
                as+=grid[i][j];
                m.insert(grid[i][j]);
            }
        }
        ans[1]=es+ans[0]-as;
        return ans;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "enter the n*n elements:\n";
    vector<vector<int>> grid(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> grid[i][j];
        }
    }
    Solution s;
    vector<int> ans=s.findMissingAndRepeatedValues(grid);
    cout << "repeating value = " << ans[0];
    cout << "\nmissing value = " << ans[1];
}