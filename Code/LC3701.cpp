#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                s=s+nums[i];
            }
            else
            {
                s=s-nums[i];
            }
        }   
        return s;
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
    Solution s;
    cout << s.alternatingSum(nums);
}