#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0, ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(freq==0)
            {
                ans=nums[i];
                freq++;
            }
            else if(ans==nums[i])
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Solution t;
    int ans=t.majorityElement(nums);
    cout << ans;
    return 0;
}