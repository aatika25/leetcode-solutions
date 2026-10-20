#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0, e=nums.size()-1;
        while(st<=e)
        {
            int mid=st+(e-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[st]<=nums[mid])
            {
                if(nums[st]<=target && target<nums[mid])
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
                if(nums[mid]<target && target<=nums[e])
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
    int target;
    cout << "target = ";
    cin >> target;
    Solution s;
    cout << s.search(nums,target);
}