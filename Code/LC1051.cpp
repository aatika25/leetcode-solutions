#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> cp=heights;
        sort(cp.begin(),cp.end());
        int cnt=0;
        for(int i=0;i<cp.size();i++)
        {
            if(cp[i]!=heights[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    int n;
    cout << "no of students = ";
    cin >> n;
    vector<int> heights(n);
    cout << "enter the heights:\n";
    for(int i=0;i<n;i++)
    {
        cin >> heights[i];
    }
    Solution s;
    cout << s.heightChecker(heights);
}