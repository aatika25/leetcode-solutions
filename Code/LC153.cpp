#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0, e=nums.size()-1;
        while(st<e)
        {
            int mid=st+(e-st)/2;
            if(nums[mid]>nums[e])
            {
                st=mid+1;
            }
            else
            {
                e=mid;
            }
        }
        return nums[st];
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
    cout << s.findMin(nums);
}