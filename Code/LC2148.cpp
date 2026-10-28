#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int r1=nums[0], r2=nums[nums.size()-1];
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=r1 && nums[i]!=r2)
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
    cout << "n = ";
    cin >> n;
    vector<int> nums(n);
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    Solution s;
    cout << s.countElements(nums);
}