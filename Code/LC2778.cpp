#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(n%(i+1)==0)
            {
                int t=nums[i]*nums[i];
                ans=ans+t;
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
    Solution s;
    cout << s.sumOfSquares(nums);
    return 0;
}