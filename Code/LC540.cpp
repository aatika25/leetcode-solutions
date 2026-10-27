#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int st=0, e=nums.size()-1;
        while(st<=e)
        {
            int mid=st+(e-st)/2;
            if(mid==0 && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            else if(mid==nums.size()-1 && nums[mid]!=nums[mid-1])
            {
                return nums[mid];
            }
            else if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            else if(mid%2==0)
            {
                if(nums[mid]==nums[mid-1])
                {
                    e=mid-1;
                }
                else
                {
                    st=mid+1;
                }
            }
            else
            {
                if(nums[mid]==nums[mid-1])
                {
                    st=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
        }
        return -1;
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
    cout << s.singleNonDuplicate(nums);
}