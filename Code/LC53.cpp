#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0, maxSum=INT_MIN;
        for(int i:nums)
        {
            currSum+=i;
            maxSum=max(currSum,maxSum);
            if(currSum<0)
            {
                currSum=0;
            }
        }
        return maxSum;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "enter the elements:\n";
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Solution t;
    int ans=t.maxSubArray(nums);
    cout << ans;
    return 0;
}