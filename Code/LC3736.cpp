#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        int m=nums[nums.size()-1];
        for(int i:nums)
        {
            cnt=cnt+(m-i);
        }
        return cnt;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Solution s;
    cout << s.minMoves(nums);
}