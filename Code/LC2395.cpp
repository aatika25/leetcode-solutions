#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                if((nums[i]+nums[i+1])==(nums[j]+nums[j+1]))
                {
                    return true;
                }
            }
        }
        return false;
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
    Solution s;
    if(s.findSubarrays(nums))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}