#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]<target)
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
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "target = ";
    cin >> target;
    Solution s;
    cout << s.countPairs(nums,target);
}