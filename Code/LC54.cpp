#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a;
        int m=matrix.size(), n=matrix[0].size();
        int srow=0, erow=m-1, scol=0, ecol=n-1;
        while(srow<=erow && scol<=ecol)
        {
            for(int j=scol;j<=ecol;j++)
            {
                a.push_back(matrix[srow][j]);
            }
            for(int i=srow+1;i<=erow;i++)
            {
                a.push_back(matrix[i][ecol]);
            }
            for(int j=ecol-1;j>=scol;j--)
            {
                if(srow==erow)
                {
                    break;
                }
                a.push_back(matrix[erow][j]);
            }
            for(int i=erow-1;i>=srow+1;i--)
            {
                if(scol==ecol)
                {
                    break;
                }
                a.push_back(matrix[i][scol]);
            }
            srow++;
            erow--;
            ecol--;
            scol++;
        }
        return a;
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
    Solution s;
    vector<int> ans=s.spiralOrder(matrix);
    cout << "answer:\n";
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
}